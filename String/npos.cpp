#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
        npos : It is a constant static member value with the highest possible value for an element of 
               type size_t.
        npos is commonly used when searching within a string (like with find, rfind, find_first_of, etc.) 
        to indicate that a substring or character was not found.
    */

    string str = "Hello, World!";
    string substr = "World";

    // Find the substring
    size_t found = str.find(substr);

    if (found != std::string::npos) {
        cout << "Substring found at position: " << found << endl;
    } 
    else {
        cout << "Substring not found" << endl;
    }

    //other way to write above code
    if(str.find(substr) != string::npos){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

}