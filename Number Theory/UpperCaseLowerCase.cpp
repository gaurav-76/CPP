#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    
    for(int i = 10; i >= 0; --i){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(){

    for(char c = 'A'; c <= 'E'; ++c){
        cout << c << " : ";
        printBinary(c);
    }

    for(char c = 'a'; c <= 'e'; ++c){
        cout << c << " : ";
        printBinary(c);
    }

    //if you clearly observe the binary of any uppercase and lower case letter
    //you will see there is only 1 diff in 5th bit

    //Ex : A - 00001000001 , a - 00001100001
    //     C - 00001000011 , c - 00001100011

    //so if you want to lower case any upper case letter
    //than we have to set 5th bit
    char A = 'A';
    char a = (A | (1 << 5));
    cout << "A to a : " << a << endl;

    //so if you want to upper case any lower case letter
    //than we have to unset 5th bit
    char c = 'c';
    char C = (c & (~(1 << 5)));
    cout << "c to C : " << C << endl;

    // 1 more interesting thing
    // what is this 1 << 5 this is equal to ' ' (white space)
    //so if we do 'A' | ' ' - then this will also give lower case
    cout << "B to b : " << char('B' | ' ') << endl;

    // ~(1 << 5) - but this will give a large int which is outer 0 to 255
    //so for this we don't have any character

    //but if we see if we have to unset any bit
    //e : 00001100101
    //  : 00001011111 - we need this number so this is equal to '_' (underscore)
    // so if we do 'd' & '-' then will give uppercase letter
    // so '_' 5 th bit is unset
    cout << "d to D : " << char('d' & '_') << endl;

}