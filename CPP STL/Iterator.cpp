#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1 = {1, 2, 3, 4, 5};

    vector<int> :: iterator it;

    //it = v1.begin() - means it pointing to v1[0]
    // v1.end() - pointing to next address after the last element of v1[5]
    for(it = v1.begin(); it != v1.end(); ++it){
        cout << (*it) << " ";
    }
    cout << endl;

    vector<pair<int, int>> v2 = {{1, 2}, {2, 3}, {3, 4}};

    vector<pair<int, int>> :: iterator it1;
    for(it1 = v2.begin(); it1 != v2.end(); ++it1){
        // (*it1).first == it1->first
        //cout << (*it1).first << " " << (*it1).second << endl;
        cout << it1->first << " " << it1->second << endl;
    }
}