#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s, string str){

    cout << str << endl;

    for(string value: s){
        cout << value << endl;
    }
    cout << endl;
}

void print(set<int> &s, string str){

    cout << str << endl;

    for(int value: s){
        cout << value << endl;
    }
    cout << endl;
}

int main(){
    
    //internally implemented using Red Black Tree (self balancing)
    //set , sorted and no duplicate values are allowed

    //set declaration without value
    //by default sorting order ascending order
    set<string> s1;

    //set declaration with value
    set<string> s2 = {"abc", "bcd", "gnd", "bcd", "dht"};
    print(s2, "Set Declaration with value");


    //we can also change order to decreasing order by writing greater<data_type> inside set
    // set<int, greater<int> > s3;
    // s3.insert(40);
    // s3.insert(30);
    // s3.insert(60);
    // s3.insert(20);
    // s3.insert(50);

    // for(auto it: s3){
    //     cout << it << " ";
    // }

/*---------------------Inserting element----------------------*/
    //insert() - o(log(n))
    s1.insert("abc");
    s1.insert("ndt");
    s1.insert("bcd");
    s1.insert("fgr");
    s1.insert("abc");

    print(s1, "Inserting element");

/*------------------------Finding element---------------------*/
    //o(log(n))
    auto it = s1.find("abc");
    if(it != s1.end()){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

/*--------------------------Deleting element----------------------*/
    //o(log(n))
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

    set<int> s4;
    s4.insert(40);
    s4.insert(30);
    s4.insert(60);
    s4.insert(20);
    s4.insert(50);

    print(s4, "Lower upper bound");

    //Lower Bound - Returns an iterator to the first element that is not less than the specified key or equal key
    //lower bound return first element which is ≥ value. If not, return end().
    // o(log(n))
    auto it1 = s4.lower_bound(40);
    cout <<"Lower Bound of 40 - " << *(it1) << endl;

    auto it2 = s4.lower_bound(50);
    cout <<"Lower Bound of 50 - " << *(it2) << endl;

    //Upper Bound - Returns an iterator to the first element that is greater than the specified key 
    //upper bound return first element which is > value. If not, return end().
    // o(log(n))
    auto it3 = s4.upper_bound(40);
    cout <<"Upper Bound of 40 - " << *(it3) << endl;

    auto it4 = s4.upper_bound(60);
    cout <<"Upper Bound of 60 - " << *(it4) << endl;


}