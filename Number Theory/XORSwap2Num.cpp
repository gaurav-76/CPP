#include<bits/stdc++.h>
using namespace std;

int main(){


    // xor property 
    // xor of 2 same number will be 0 , e.x = 5 ^ 5 = 0
    // 1 0 - 1
    // 0 1 - 1
    // 1 1 - 0
    // 0 0 - 0

    //swapping 2 number using xor operator
    int a = 4, b = 6;
    cout << "Before swapping : " << "a : " << a << " b : " << b << endl; 
    // we are replacing a with a ^ b
    // so a -> a ^ b -> we can write this b ^ (a ^ b) -> but as b ^ b is 0, b -> a
    // so b -> b ^ a -> we can write this a ^ (b ^ a) -> but as a ^ a is 0, a -> b
    
    a = a ^ b;  // a = 100(4) ^ 110(6) => 010(2)
    b = b ^ a; // b = 110(6) ^ 010(2) => 100(4)
    a = a ^ b; // a = 010(2) ^ 100(4) => 110(6);

    cout << "After swapping : " << "a : " << a << " b : " << b << endl;

}