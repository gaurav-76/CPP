#include<bits/stdc++.h>
using namespace std;

const int N = 100;
vector<bool> isPrime(N+1, true);
vector<int> lP(N+1, 0), hP(N+1, 0);
int main(){

    //Sieve Algorithm
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= N; ++i){
        if(isPrime[i]){
            //handling prime number , because for prime number
            //lp, hp will be himself
            lP[i] = i;
            hP[i] = i;
            for(int j = 2 * i; j <= N; j += i){
                isPrime[j] = false;

                hP[j] = i;
                if(lP[j] == 0){
                    lP[j] = i;
                }
            }
        }
    }

    //lowest prime and highest prime for any number
    // ex : 10 -> 2 , 5 (prime factorization)
    // 2 is lp , 5 is hp

    cout << "Number | " << "LP | " << "HP" << endl;
    for(int i = 0; i <= 10; ++i){
        cout << i << " " << lP[i] << " " << hP[i] << endl;
    }  


    //Prime Factorization using sieve
    vector<int> primeF;
    int num;
    cout << "Enter num : ";
    cin >> num;
    int temp = num;
    while(num > 1){
        int pF = hP[num];
        while(num % pF == 0){
            primeF.push_back(pF);
            num = num / pF;
        }
    }

    cout << "Prime factors for number " << temp << " : ";
    for(int &val: primeF){
        cout << val << " ";
    }
    cout << endl;


    //Divisors of any number or sum of all divisors
    //modification in sieve algorithm
    vector<int> divisors[N+1];
    vector<int> sum(N+1, 0);
    for(int i = 2; i <= N; ++i){
        for(int j = i; j <= N; j += i){
            divisors[j].push_back(i);
            sum[j] += i;
        }
    }

    for(int i = 2; i <= 10; ++i){
        cout << "Divisors of " << i << endl;
        for(int &val: divisors[i]){
            cout << val << " ";
        }
        cout << endl;
        cout << "Sum : " << sum[i] << endl;
        
    }
}