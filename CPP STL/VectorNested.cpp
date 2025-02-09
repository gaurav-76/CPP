#include<bits/stdc++.h>
using namespace std;

//vector with pair
// void print(vector<pair<int, int>> v){
    
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i].first << " -> " << v[i].second <<endl;
//     }
// }

//vector of array
// void print(vector<int> v[], int n){
    
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < v[i].size(); j++){
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//vector of vector
void print(vector<vector<int>> v){
    
    for(vector<int> nums: v){
        for(int num: nums){
            cout << num << " ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter vector size : ";
    cin >> n;
    //vector - pair nesting
    vector<pair<int, int>> v1;

    // for(int i = 0; i < n; i++){
    //     int e1, e2;
    //     cin >> e1 >> e2;
    //     v1.push_back({e1, e2});
    //     //v1.push_back(make_pair(e1, e2));
    // }
    // print(v1);

    //vector of array - row will be fixed and col will be dynamic
    // vector<int> v2[n];
    // for(int i = 0; i < n; i++){
    //     int col;
    //     cin >> col;
    //     for(int j = 0; j < col; j++){
    //         int ele;
    //         cin >> ele;
    //         v2[i].push_back(ele);
    //     }
    // }
    // print(v2, n);

    //row and col both are dynamic
    //vectors of vectors without size
    vector<vector<int>> v3;

    //with size declaration 5 is row size and 4 is col size
    //vector<vector<int>> v4(5, vector<int>(4, 0));

    for(int i = 0; i < n; i++){
        int col;
        cin >> col;
        vector<int> temp;
        for(int j = 0; j < col; j++){
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        v3.push_back(temp);
    }

    print(v3);

}