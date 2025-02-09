#include<bits/stdc++.h>
using namespace std;

int main(){

    //checking wether the given string contains digit or not

    string str = "ABC139A31C";

    for(int i = 0; i < str.length(); ++i){
        if(isdigit(str[i])){
            cout << str[i] << " : " << "Is Digit" << endl;
        }
        else if(isalpha(str[i])){
            cout << str[i] << " : " << "Is Alpha" << endl;
        }
    }

    //if we want to check whether given character is in uppercase or in lowercase
    //we can use

    //isupper(character)
    if(isupper('A')){
        cout << "A in upper case" << endl;
    }

    //islower(character)
    if(islower('a')){
        cout << "a in lower case" << endl;
    }


    //converting string to upper case
    string str1 = "hello";

    //toupper() will convert only a character to uppercase
    transform(begin(str1), end(str1), begin(str1), ::toupper);

    cout << "Upper Case : " << str1 << endl;

    //tolower()
    transform(begin(str1), end(str1), begin(str1), ::tolower);
    cout << "Lower Case : " << str1 << endl;

    
    
}