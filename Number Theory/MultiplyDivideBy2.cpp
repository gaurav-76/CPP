#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i = 10; i >= 0; --i){
        cout << ((num >> i)&1);
    }
    cout << endl;
}

int main(){

    //assume we want to divide 5 by 2
    // 5 / 2 = 2
    // binary of 5 = 00000000101
    // binary of 2 = 00000000010
    // now if you see the binary of answer 00000000010
    // then you will se it's nothing but (n >> 1)

    int n = 5;
    printBinary(5);

    cout << "Divide by 5/2 : " << (n >> 1) << endl;

    //assume we want to multiply 5 by 2
    // 5 * 2 = 10
    // binary of 5 = 00000000101
    // binary of 2 = 00000000010
    // now if you see the binary of answer 0000001010
    // then you will se it's nothing but (n << 1)

    cout << "Multiply by 5*2 : " << (n << 1) << endl;
}