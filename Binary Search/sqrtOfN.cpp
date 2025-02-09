#include<bits/stdc++.h>
using namespace std;

//luv video
//we want sqrt of any number till 5 decimal precision that's why we declare a variable prec with 1e-6
//if you want till 7 precision then you can write 1e-8
double prec = 1e-6;

//in this code we will be finding sqrt of any number n
int main(){

    //need to take double data type as sqrt will be in decimal places
    double n;
    cout << "Enter number n : ";
    cin >> n;

    double start = 1, end = n;

    //T.c : log(n * 10^d)
    //every 1 - 2 , 2 - 3, contain 10^d decimal places

    //change in condition , instead of 1 there should be precision
    while(end - start > prec){

        double mid = start + (end - start) / 2;
        if(mid * mid < n){
            start = mid;
        }
        else{
            end = mid;
        }    
    }

    //if we print any start or end , we will get our sqrt
    //these 2 variable conatin same value till precision 5
    cout << "start : " << start << " -> " << "end : " << end << endl;

}