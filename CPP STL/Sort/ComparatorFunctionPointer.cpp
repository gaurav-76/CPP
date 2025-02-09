
//codestorywithmik

#include<bits/stdc++.h>
using namespace std;

//Function pointer
bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first){
        return p1.second > p2.second;
    }

    return p1.first > p2.first;
}

void print(vector<pair<int, int>> &arr){
    for(auto it: arr){
        cout << it.first << " " << it.second << endl;
    }
}

int main(){

    vector<pair<int, int>> arr = {{1, 4}, {1, 2}, {3, 5}, {2, 4}, {3, 2}};

    //default increasing order
    sort(begin(arr), end(arr));
    
    cout << "Increasing Order without cmp : " << endl;
    print(arr);

    //custome comparator (function pointer)
    sort(begin(arr), end(arr), cmp);
    cout << "Decreasing order passing custom cmp : " << endl;
    print(arr);

    //another way
    //sort(begin(arr), end(arr), greater<pair<int, int>>());
}