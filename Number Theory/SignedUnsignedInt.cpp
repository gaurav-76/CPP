#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << "INT_MAX : " << INT_MAX << endl;
    //so as here 1 bit reserve for sign
    //left 31 bit , but while calculating 2^31 it become 32 bit after that
    // -1 will happen , and then entire number will be 31 bit.
    //int a = (1 << 31) - 1; //signed int 1 bit reserve for determining sign
    
    //so we need to handle 32 bit , that's why we adding ll with 1
    int a = (1LL << 31) - 1;
    cout << "Signed Int : " << a << endl;

    //unsigned int
    //unsigned int b = (1 << 32) - 1; // will give overflow error 

    //need to handle 33 bit by using ll with 1
    unsigned int b = (1LL << 32) - 1;
    cout << "Unsigned int : " << b << endl;


    //To get INT_MIN
    cout << "INT_MIN : " << INT_MIN << endl;
    int c = (1 << 31);
    cout <<"This wil give INT_MIN value : " << c << endl;

    cout << (1 << 2) << endl;
}