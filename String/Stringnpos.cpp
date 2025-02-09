#include<bits/stdc++.h>
using namespace std;

int main(){

    //     What is string::npos?

    // It is a constant static member value with the highest possible value for an element of type size_t.
    // It actually means until the end of the string.
    // It is used as the value for a length parameter in the string’s member functions.
    // As a return value, it is usually used to indicate no matches.

    string s1 = "geeksforgeeks";
    string s2 = "for";
    // Find position of string s2
    int found = s1.find(s2);
 
    // Check if position is -1 or not
    if (found != string::npos) {
 
        cout << "first " << s2 << " found at: " << (found)
             << endl;
    }
 
    else
        cout << s2 << " is not in"
             << "the string" << endl;

             
}