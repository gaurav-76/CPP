#include<bits/stdc++.h>
using namespace std;

int main(){

    string word = "HelloGaurav";
    //white space will be included in size/length of sentance
    string sentance = "Hello, how are you ?"; 

/*------------------Size or length of String------------------------*/
    //size()
    cout << "Size (word, sentance) : " << word.size() << " , " << sentance.size() << endl;
    
    //length()
    cout << "Length (word, sentance) : " << word.length() << " , " << sentance.length() << endl;

/*--------------------Accessing element--------------------*/

    //[] operator
    cout <<"Accessing element [] Operator " << word[1] << endl;

    //at()
    cout << "Accessing element at() method : " << word.at(1) << endl; 

/*-------------------Inserting or adding new character---------------*/

    //push_back() - add character at end of string
    word.push_back('K');
    cout << "Push Back : " << word << endl;

    //insert() - insert element at specific position , takes string as parameter
    word.insert(0, "Hi");
    cout << "Insert : " << word << endl;

/*--------------------Concatenating Strings---------------*/

    //Append() - Appends another string or character to the end.
    word.append(sentance);
    cout << "Append (Appended word and sentance) : " << word << endl;

    //+ operator
    string temp = word + sentance;
    cout << "+ operator : " << temp << endl;


/*-------------------------Deleting element------------------------*/

    //erase() - Erases a part of the string, given a starting position and length.
    //word.erase(4); - //element from 4 idx all will be deleted
    word.erase(4, 7); //element from idx 4 till 7 length (means till 11 idx) will be deleted
    cout << "Erase : " << word << endl;
 
    //clear() - Clears the string, making it an empty string.
    word.clear();

    //empty() - Checks if the string is empty or not.
    if(word.empty()){
        cout << "Word empty " << endl;
    }
    else{
        cout << "Word not empty " << endl;
    }

    //replace(startidx, lastidx(exclusive), new string) - Replaces part of the string with another string.
    word = "HelloGaurav";
    word.replace(0, 5, "Hi");
    cout << "Replaces Hello with Hi : " << word << endl;

    //substring(startIdx(inclusive), length); - Returns a substring starting from a given position and having a specific length.
    string subStr = word.substr(0, 3);
    cout << "Substring of word : " << subStr << endl;

    //find() - It returns the pointer to the first occurrence of the character or a substring in the string.
    int position = word.find("Gaurav");
    cout << "Gaurav found at index : " << position << endl;

    cout << "Finding only character : " << word.find('H') << endl; 

    //rfind() - Finds the last occurrence of a substring or character.
    cout << "RFind Gaurav : " << word.rfind("Gaurav") << endl;
    cout << "RFind H : " << word.rfind('H') << endl;

    //compare() - Compares two strings lexicographically.
    //if str1 < str2 then compare will return value less than 0
    //if str1 > str2 then compare will return value greater than 0
    int val = word.compare(sentance);
    if(val < 0){
        cout << "Word is less than sentance " << endl;
    }
    else{
        cout << "Sentance is smaller that word " << endl;
    }

    //reverse()
    reverse(begin(word), end(word));
    cout << "Reverse : " << word << endl;

    //swap() - swaps string value
    cout << "Before swapping" << endl;
    cout << word << " : " << sentance << endl;
    word.swap(sentance);

    cout << "After swapping" << endl;
    cout << word << " : " << sentance << endl;

    //count() - Count the occurrences of a character.
    cout << "Count of H : " << count(begin(word), end(word), 'H') << endl;

/*----------------------Integer to String and vice versa---------------*/

    int num = 12345;
    string str1 = to_string(num);
    cout << "Integer to string : " << str1 << endl;

    int num1 = stoi(str1);
    cout << "String to integer : " << num1 << endl;

/*-------------------------Removing whitespaces----------------------*/

    string str2 = " Hi Hello";
    cout << "Without left trim:" << str2 << endl;
    str2.erase(0, str2.find_first_not_of(" ")); //left whitespaces trim
    cout << "After left trim:" << str2 << endl;

    string str3 = "Hi Hello ";
    cout << "Without right trim:" << str3 << "I" << endl;
    str3.erase(str3.find_last_not_of(" ") + 1); //right whitespaces trim
    cout << "After right trim:" << str3 << "I" << endl;
}