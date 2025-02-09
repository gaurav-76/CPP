#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &mp, string str){

    cout << str << endl;
    for(auto &it: mp){
        cout << it.first << " - " << it.second << endl;
    }
    cout << endl;
}

// void print(unordered_map<int, int> &mp, string str){

//     cout << str << endl;
//     for(auto &it: mp){
//         cout << it.first << " - " << it.second << endl;
//     }
//     cout << endl;
// }

int main(){

    //Unordered Maps are implemented using Hashtable internally
    //Unordered Map - not sorted , no duplicate keys allowed
    //for every key value hashcode is generated
    /*we can't use pair, set, vector as key in unordered_map as internally code is not written for these
      data type to convert into hashcode */
    //unordered_map declaration ,key type is int and value type is string
    
    unordered_map<int, string> mp;

/*------------------------Inserting element in map-----------------------*/
    //using [] t.c : o(1) n - size of map
    mp[1] = "abc";

    //using insert
    mp.insert({2, "bde"});
    mp.insert(make_pair(3, "utr"));

    mp[4] = "bcr";
    mp[2] = "btr"; // it will replace the old value

    print(mp, "Inserting Element");

/*----------------------Finding element----------------------------*/
    //find() - o(1)
    auto it = mp.find(1);
    //it will return iterator if found, if not found then return iterator pointing to mp.end()
    if(it != mp.end()){
        cout << "Element Found : " << it->first << " - " << it->second << endl; 
    }
    else{
        cout << "Not Found Element" << endl;
    }

/*--------------------Erasing element-------------------------*/
    //erase() - o(1);
    if(it != mp.end()){
        mp.erase(it); // we can also pass iterator
        mp.erase(3); // we can also pass key
    }
    print(mp, "Erasing element");

    //clear() - o(n) 
    // mp.clear();
    // print(mp, "Clear map");

   //empty()  - 0 : not empty , 1 : empty
    cout <<"Map Empty - " << mp.empty() << endl;
    
/*---------------------Size / Count ------------------------*/

    //size o(1)
    cout << mp.size() << endl;

    //count o(1)
    //Returns the number of matches to element with key-value in the map
    if(mp.count(2)){
        cout << "Found element" << endl;
    }

//Upper , Lower Bound not supported in unordered_map

    
}