#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){

    for(int i = 10; i >= 0; --i){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(){

    printBinary(16);
    printBinary(15);

    // 16 - 0000010000
    // 15 - 0000001111
    // so if any number is power of 2 , then if you do 
    // n & (n-1) then it will give 0 , if it gives 1 means the number is not power of 2

    int n = 7;
    if(n & (n-1)){
        cout << "Not power of 2" << endl;
    }
    else{
        cout << "Power of 2" << endl;
    }
}