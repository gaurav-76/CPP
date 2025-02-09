#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;

    if(n == 1){
        cout << n << ": Not prime number" << endl;
        return 0;
    }

    //brute force t.c : o(n)
    cout << "Brute force" << endl;
    bool isPrime = true;
    for(int i = 2; i < n; ++i){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << n << ": Prime number" << endl;
    }
    else{
        cout << n << ": Not prime number" << endl;
    } 

    //optimized code t.c : o(sqrt(n))
    cout << "Optimized code" << endl;
    isPrime = true;
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << n << ": Prime number" << endl;
    }
    else{
        cout << n << ": Not prime number" << endl;
    }

}