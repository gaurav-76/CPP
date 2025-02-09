#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i = 10; i >= 0; --i){
        cout << ((num >> i)&1);
    }
    cout << endl;
}

int main(){

    //odd numbers binary end with 1 at 0th position 
    //while even number binary end with 0 at 0th position
    //so if we do & with 1 , and 1 come means that number is odd
    //else that number is even

    for(int i = 1; i <= 10; ++i){
        printBinary(i);
        if(i & 1){
            cout << i << " : " << "Odd Number" << endl;
        }
        else{
            cout << i << " : " << "Even number" << endl;
        }
    }

}