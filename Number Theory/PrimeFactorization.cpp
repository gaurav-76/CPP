#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &primes){
    cout << "Prime Factors" << endl; 
    for(int &prime: primes){
        cout << prime << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int n1 = n;

    //Brute Force t.c : o(n)
    cout << "Brute force" << endl;
    vector<int> primeFactors;
    for(int i = 2; i <= n; ++i){
        while(n % i == 0){
            primeFactors.push_back(i);
            n = n / i;
        }
    }

    print(primeFactors);

    //Optimized code t.c : o(sqrt(n))
    cout << "Optimized code" << endl;
    primeFactors.clear();
    for(int i = 2; i * i <= n1; ++i){
        while(n1 % i == 0){
            primeFactors.push_back(i);
            n1 = n1 / i;
        }
    }

    if(n1 > 1){
        primeFactors.push_back(n1);
    }

    print(primeFactors);

}