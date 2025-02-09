#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s, string str){

    cout << str << endl;

    for(string value: s){
        cout << value << endl;
    }
    cout << endl;
}

void print(unordered_set<int> &s, string str){

    cout << str << endl;

    for(int value: s){
        cout << value << endl;
    }
    cout << endl;
}

int main(){
    
    //internally implemented using hashtable
    //unordered_set , not sorted and no duplicate values are allowed

    //unordered set declaration without value
    //by default sorting order ascending order
    //we can't use complex data structures (set, pair, map, vector) to declare unordered set
    unordered_set<string> s1;

    //set declaration with value
    unordered_set<string> s2 = {"abc", "bcd", "gnd", "bcd", "dht"};
    print(s2, "Unordered Set Declaration with value");


/*---------------------Inserting element----------------------*/
    //insert() - o(1)
    s1.insert("abc");
    s1.insert("ndt");
    s1.insert("bcd");
    s1.insert("fgr");
    s1.insert("abc");

    print(s1, "Inserting element");

/*------------------------Finding element---------------------*/
    //o(1)
    auto it = s1.find("abc");
    if(it != s1.end()){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

/*--------------------------Deleting element----------------------*/
    //o(1)
    // if(it != s1.end()){
    //     s1.erase(it); // passing iterator
    // }
    // print(s1, "Deleting element");

    // it will delete all element before fgr
    s1.erase(s1.begin(), s1.find("fgr"));
    print(s1, "Deleting all element before fgr");

    //empty()
    // 0 - not empty 1 - empty
    cout <<"Empty or not : " << s1.empty() << endl;

    //size()
    cout << "Size : " << s1.size() << endl;

/*---------------------Upper , Lower Bound --------------------*/
    /*upper bound and lower bound is not possible in unordered set as these
    data structures are not sorted
    upper bound , lower bound are supported in those data structure those are
    sorted 
    */

    //swap() : Exchange values of two unordered_set.
    unordered_set<int> arr1 = {1, 2, 3, 4, 5};
    unordered_set<int> arr2 = {6, 7, 8, 9, 10};

    print(arr1, "Arr1 Before swapping");
    print(arr2, "Arr2 Before swapping");

    arr1.swap(arr2);

    print(arr1, "Arr1 After swapping");
    print(arr2, "Arr2 After swapping");

}