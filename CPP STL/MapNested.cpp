#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
        keys - we can put all those complex data structres as key , 
        those can be simply compare with relational operators (< ,  >)
        because keys will be in sorted order when you print

        values - data structure can be of any type
    */

   set<int> st1 = {1, 2, 3};
   set<int> st2 = {1, 2, 4};
   
   //if st1 < str2 will print 1 else print 0
   /*
        first st1 and st2 first element will be compared if elements are = then
        second element will be compared , this process goes until either the elements
        are sorter than other or else set idx goes out of bound
    */
    cout << (st1 < st2) << endl;

    //{firstName, lastName, marks}
    map<pair<string, string>, vector<int>> mp;

    int n;
    cout << "No of elements in map will be : ";
    cin >> n;

    for(int i = 0; i < n; ++i){

        string fname, lname;
        cout << "Enter first name and last name : ";
        cin >> fname >> lname;

        int m;
        cout << "Size of marks list : ";
        cin >> m;

        for(int j = 0; j < m; ++j){
            int marks;
            cin >> marks;
            //inserting element in map
            mp[{fname, lname}].push_back(marks);
        }
    }

    //Print map
    for(auto &it: mp){

        //taking by reference so no copy of value create
        auto &fullName = it.first;
        auto &marks = it.second;

        cout << fullName.first << " " << fullName.second << endl;
        cout << "Marks : ";
        for(int &mark: marks){
            cout << mark << " ";
        }
        cout << endl;
    }


}