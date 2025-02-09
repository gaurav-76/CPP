#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "Hello Gaurav Whatsapp , how are you ?";

    string temp;
    stringstream ss(str);
    //we can take any type of delimeter like , [ , ], ( , ) , ?
    char delimeter = ' ';

    vector<string> vec;

    while(getline(ss, temp, delimeter)){
        vec.push_back(temp);
    }

    cout <<"String after splliting based on white spaces : " << endl;

    for(string &s: vec){
        cout << s << endl;
    }

	
    //easy way
    //vector<string> temp;

    //stringstream ss(sentence);
    //string word;

    //while(ss >> word){
      //temp.push_back(word);
    //}
}