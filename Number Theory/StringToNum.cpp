//In this code we will be converting string to num without using 
//stoi() - int , stol() - long

//int  - 10 ^ 9 (approx)
//long - 10 ^ 12 (approx)
//long long - 10 ^ 18 (approx)

/* 10 ^ 9 + 7 - is a prime number , which is used as MOD in most of
 cp questions to return answer as result % MOD.
*/

//Modular Arithmetic Formula
// (a + b) % M = ((a % M) + (b % M)) % M
// (a * b) % M  = ((a % M) * (b % M)) % M
// (a - b) % M = ((a % M) - (b % M) + M) % M
// (a / b) % M = ((a % M) * (b^-1) % M) % M

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cout << "Enter number : ";
    cin >> str;

    int num = 0;
    int n = str.length();

    for(int i = 0; i < n; ++i){
        num = (num * 10) + (str[i] - '0');
    }

    cout << "String to Int : " << num << endl;
}