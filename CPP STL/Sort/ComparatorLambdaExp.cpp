
#include<bits/stdc++.h>
using namespace std;

void print(vector<pair<int, int>> &arr){
    for(auto it: arr){
        cout << it.first << " " << it.second << endl;
    }
}

int main(){

    vector<pair<int, int>> arr = {{1, 4}, {1, 2}, {3, 5}, {2, 4}, {3, 2}};

    //default increasing order
    sort(begin(arr), end(arr));
    
    cout << "Increasing Order without lambda exp : " << endl;
    print(arr);

    //lambda expression
    sort(begin(arr), end(arr), [](pair<int, int> p1, pair<int, int> p2){
        if(p1.first == p2.first){
            return p1.second > p2.second;
        }
        return p1.first > p2.first;
    });

    cout << "Decreasing order with lambda exp : " << endl;
    print(arr);

    //this can also be write as
    //lambda expression
    /*
        [] - capture clause, in this we can pass any other data structure
        present in that block and want to use in the cmp , like unordered map or vector
    */
    // auto cmp = [](pair<int, int> p1, pair<int, int> p2){
    //     if(p1.first == p2.first){
    //         return p1.second > p2.second;
    //     }
    //     return p1.first > p2.first;
    // };
    // sort(begin(arr), end(arr), cmp);
    
    // cout << "Decreasing order with lambda exp : " << endl;
    // print(arr);
}