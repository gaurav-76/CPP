#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cout << "Enter string : ";
    //assume you are giving input as Gaurav Kumar Singh, but it will print 
    //only Gaurav because cin does not take input after white space ' '
    cin >> str;
    cout << "String you entered : " << str << endl;

    // Ignore the leftover newline from previous input

    //cin.ignore(): This is used to clear the newline character left in the input buffer after using cin >> str; 
    //so that getline() works properly.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //so to resolve above problem
    //you can use getline(cin, variable_name);
    //getline() to read entire lines or space-separated strings
    string str1;
    cout << "Enter string (getline) : ";
    getline(cin, str1);
    cout << "String (getline) : " << str1 << endl;

/*------------------Different ways to iterate string-----------------*/
    //for loop
    for(int i = 0; i < str.length(); ++i){
        cout << str[i] << " ";
    }
    cout << endl;

    //for each loop
    for(char &ch: str){
        cout << ch << " ";
    }
    cout << endl;

    //using iterator
    string :: iterator it;
    for(it = begin(str); it != end(str); ++it){
        cout << *it << " ";
    }
    cout << endl;
}