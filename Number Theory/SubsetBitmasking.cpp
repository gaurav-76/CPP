#include<bits/stdc++.h>
using namespace std;

void printBinary(int num, int n){

    for(int i = n-1; i >= 0; --i){
        cout << ((num >> i) & 1);
    }
}

vector<vector<int>> solve(vector<int> arr){

    int n = arr.size();
    int subsetCnt = (1 << n);

    vector<vector<int>> subsets;
    for(int mask = 0; mask < subsetCnt; ++mask){
        vector<int> subset;
        for(int i = 0; i < n; ++i){
            if((mask & (1 << i)) != 0){
                subset.push_back(arr[i]);
            }
        }
        subsets.push_back(subset);
    }

    return subsets;
}

int main(){

    vector<int> arr = {2, 4, 5};

    for(int i = 0; i < 3; ++i){
        cout << "Index : " << i << " - " << "Element : " << arr[i] << endl;
    }
    vector<vector<int>> subsets = solve(arr);

    for(int i = 0; i < subsets.size(); ++i){
        printBinary(i, 3);
        cout << " - ["; 
        for(int &ele: subsets[i]){
            cout << ele << " ";
        }
        cout << "]" << endl;
    } 
}