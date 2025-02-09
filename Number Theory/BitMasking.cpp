#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){

    for(int i = 4; i >= 0; --i){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(){

    // 0 - orange
    // 1 - apple
    // 2 - banana
    // 3 - lichi

    vector<vector<int>> persons = {{2, 3}, {0, 1, 2}, {0, 1, 3}};

    // will store masks for every person
    vector<int> masks;
    for(int i = 0; i < 3; ++i){
        int mask = 0;
        for(int j = 0; j < persons[i].size(); ++j){
            mask = (mask | (1 << persons[i][j]));
        }
        masks.push_back(mask);
    }

    cout << "Masks : " << endl;
    for(int &mask : masks){
        printBinary(mask);
    }
    

    //finding common fruits cnt
    for(int i = 0; i < masks.size(); ++i){
        for(int j = i+1; j < masks.size(); ++j){
            //if even cnt then means 1 common fruit 
            //id odd means more that 1 common fruit
            //do binary of that number and check cnt of set bits
            int commonF = (masks[i] & masks[j]);
            cout << "Common Fruits cnt : ";
            printBinary(commonF);
        }
    }
}