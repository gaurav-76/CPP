#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    
    if(a % b == 0){
        return b;
    }

    return gcd(b, a % b);
}


int main(){

    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;

    cout << "Without inbuilt gcd : " << gcd(a, b) << endl;

    cout << "Inbult Method : " << __gcd(a, b) << endl;

    // (a * b) / gcd(a, b)
    cout << "LCM : " << (a * b) / gcd(a, b) << endl;
}