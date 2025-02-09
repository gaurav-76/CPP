#include<bits/stdc++.h>
#include<bit>
using namespace std;

void printBinary(int num){

    for(int i = 31; i >= 0; --i){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(){

    int num = 16;
    printBinary(num);
    
    // __builtin_popcount(num);
    //for long numbers use __builtin_popcountl(num) or __builtin_popcountll(num);;
    cout << "Set bit in number" << num << " : " << __builtin_popcount(num) << endl;

    cout << "Set bit in number " << __builtin_popcountll((1LL << 35)-1) << endl;

    //__builtin_clz(x) - Counts the number of leading zeros in x.
    cout << "Counts the number of leading zeros in num : " << __builtin_clz(num) << endl;


    //__builtin_ctz(x) - Counts the number of trailing zeros in x.
    cout << "Counts the number of trailing zeros in num : " << __builtin_ctz(num) << endl;

    //__builtin_parity(x): Returns the parity of x (1 if the number of set bits is odd, 0 otherwise).
    cout << "Counts parity : " << __builtin_parity(num) << endl;

    
}