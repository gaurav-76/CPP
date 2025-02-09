#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1, 2, 3, 4, 5};

    //Range Based loops
    //value will have the copy of the v's value
    // for(int value : v){
    //     cout << value << " ";
    // }

    //value with actual value we can use & refernce
    for(int &value : v){
        //it will increment every value by 1 as these are exact value not copy
        value++;
    }

    for(int &value : v){
        cout << value << " ";
    }
    cout << endl;

    vector<pair<int, int>> v1 = {{1, 2}, {2, 3}};

    for(pair<int, int> &p: v1){
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    //we can also used auto - auto keyboard will determine the type based on value
    for(auto &it : v1){
        cout << it.first << " " << it.second << endl;
    }
}