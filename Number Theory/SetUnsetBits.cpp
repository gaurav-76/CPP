#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){

    for(int i = 10; i >= 0; --i){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(){

    int a = 9;
    printBinary(a);

    //checking ith bit is set or not
    //checking 0th bit
    int i = 1;
    if((a & (1 << i)) != 0){
        cout << "Set Bit " << endl;
    }
    else{
        cout << "Not Set Bit " << endl;
    }

    //set (|) ith bit to 1
    //wanted to set 1st bit
    cout << "Set 1st bit 1 : ";
    printBinary((a | (1 << 1)));

    //unset(&) ith bit to 1
    //wanted to set 1st bit
    cout << "Unset 1st bit 1 : ";
    printBinary((a & (~(1 << 0))));

    //toggle (^) - making ith bit to opposite
    //if ith bit is 1 then making to 0
    //if ith bit is 0 then making to 1
    cout << "Toggle ith(7) bit : ";
    printBinary(a ^ (1 << 7));

    //counting set bits in a number
    int num = 16;
    int setBitCnt = 0;

    //1 way
    // for(int i = 31; i >= 0; --i){
    //     if((num & (1 << i)) != 0){
    //         setBitCnt++;
    //     }
    // }

    //2nd way
    for(int i = 31; i >= 0; --i){
        setBitCnt += ((num >> i) & 1);
    }

    cout << "Set bit in number " << num << " : " << setBitCnt << endl;
}