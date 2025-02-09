#include<bits/stdc++.h>
using namespace std;

const int N = 1e7;
vector<bool> isPrime(N+1, true);
int main(){

    //Sieve algorithm - precalculating prime number
    //T.c : o(n log log(n))

    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= N; ++i){
        if(isPrime[i]){
            //i is prime number so will mark every multiple of ith number as
            //false becuase now that number can't be prime
            for(int j = 2 * i; j <= N; j += i){
                isPrime[j] = false;
            }
        }
    }

    for(int i = 0; i < 100; ++i){
        if(isPrime[i]){
            cout << i << " : Prime Number" << endl;
        }
        else{
            cout << i << " : Not Prime Number" << endl;
        }
    }

}