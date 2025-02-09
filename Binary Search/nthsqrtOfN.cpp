#include<bits/stdc++.h>
using namespace std;

//luv video
//we want nth sqrt of any number till 5 decimal precision that's why we declare a variable prec with 1e-6
//if you want till 7 precision then you can write 1e-8
double prec = 1e-6;

double multiply(double mid, int n){
    double ans = 1;
    for(int i = 1; i <= n; ++i){
        ans *= mid;
    }
    return ans;
}

//in this code we will be finding nth sqrt of any number num
int main(){

    //need to take double data type as sqrt will be in decimal places
    double num;
    cout << "Enter number num : ";
    cin >> num;

    //nth will int type
    int n;
    cout << "Enter nth n : ";
    cin >> n;
    double start = 1, end = num;

    //T.c : n * log(num * 10^d)
    //      this above n for multiply function
    //every 1 - 2 , 2 - 3, contain 10^d decimal places

    //change in condition , instead of 1 there should be precision
    while(end - start > prec){

        double mid = start + (end - start) / 2;
        //change in code comapre to sqrt of n
        //we have to multiply mid till nth time
        if(multiply(mid, n) < num){
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