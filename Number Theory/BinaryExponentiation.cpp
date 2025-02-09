#include<bits/stdc++.h>
using namespace std;

int binExpRecur(int a, int b){
    
    //base case
    if(b == 0) return 1;
   
    long long res = binExpRecur(a, b / 2);
    //odd case
    if(b & 1){
        return a * res * res;
    }
    else{
        return res * res;
    }
}

int binExpIter(int a, int b){
    
    int ans = 1;
    while(b){
        if(b & 1){
            ans = ans * a;
        }
        b >>= 1;
        a = a * a;
    }

    return ans;
}

int main(){

    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    cout << "Without pow Recursive : " << binExpRecur(a, b) << endl;
    cout << "Without pow Iterative : " << binExpIter(a, b) << endl;
    cout << "With pow : " << pow(a, b) << endl;
}