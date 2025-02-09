#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
        we can insert all those complex data structres as values , 
        those can be simply compare with relational operators (< ,  >)
        because keys will be in sorted order when you print

    */

   vector<int> st1 = {1, 2, 3};
   vector<int> st2 = {1, 2, 4};
   
   //if st1 < str2 will print 1 else print 0
   /*
        first st1 and st2 first element will be compared if elements are = then
        second element will be compared , this process goes until either the elements
        are sorter than other or else vector idx goes out of bound
    */
    cout << (st1 < st2) << endl;

    set<vector<int>> st;

    int n;
    cout << "No of elements in set will be : ";
    cin >> n;

    for(int i = 0; i < n; ++i){

        int m;
        cout << "Size of marks list : ";
        cin >> m;

        vector<int> temp(m);
        for(int j = 0; j < m; ++j){
            int ele;
            cin >> ele;
            temp[j] = ele;
        }

        st.insert(temp);
    }

    //Print Set
    for(auto &it: st){
        cout << "Marks : ";
        for(int mark: it){
            cout << mark << " ";
        }
        cout << endl;
    }


}