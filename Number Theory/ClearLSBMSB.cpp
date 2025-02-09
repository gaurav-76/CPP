#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){

    for(int i = 10; i >= 0; --i){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(){

    printBinary(59);

    //so if we have to clear the lsb till 4th bit

    // 00000111011
    // 00000100000 - (we directly can't take this number ) // assume a scenario 00000111011 & 00000100000 , if first number has 1 at 7 or 8 position than after doing & we will got wrong answer
    // that's why we need 11111100000 this number
    // this number is nothing inversion of this number 00000011111
    // how we can get this number,  this is nothing (1 << (4+1)) - 1
    // then do & with num
    int num = 59;
    int i = 4;
    int b = (num & (~((1 << (i+1)) - 1)));
    printBinary(b);

    //clearing MSB till 3rd bit
    // 00000111011
    // 00000001111 - we need this number
    // how we can get this number,  this is nothing (1 << (3+1)) - 1

    i = 3;
    int c = (num & ((1 << (i+1)) - 1));
    printBinary(c);
}