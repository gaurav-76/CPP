#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    //Brute force t.c o(n)
    int cnt = 0;
    int sum = 0;

    cout << "All divisors brute force : " << endl;
    for(int i = 1; i <= n; ++i){
        if(n % i == 0){
            cout << i << " ";
            cnt++;
            sum += i;
        }
    }
    cout << endl;
    cout << "Count : " << cnt << endl;
    cout << "Sum : " << sum << endl;

    //Optimized approach o(sqrt(n))
    cnt = 0;
    sum = 0;
    cout << "All Divisors optimized : " << endl;
    for(int i = 1; i * i <= n; ++i){
        if(n % i == 0){
            cout << i << " " << n / i << " ";
            cnt++;
            sum += i;
            if(n / i != i){
                cnt++;
                sum += n/i;
            }
        }
    }
    cout << endl;
    cout << "Count : " << cnt << endl;
    cout << "Sum : " << sum << endl;
}