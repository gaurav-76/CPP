#include<bits/stdc++.h>
using namespace std;

void print(multimap<int, string> &mp, string str){

    cout << str << endl;
    for(auto &it: mp){
        cout << it.first << " - " << it.second << endl;
    }
    cout << endl;
}

void print(multimap<int, int> &mp, string str){

    cout << str << endl;
    for(auto &it: mp){
        cout << it.first << " - " << it.second << endl;
    }
    cout << endl;
}

int main(){

    //Multi Maps are implemented using Red Black Trees internally
    /*  In C++, the std::map is typically implemented using a Red-Black Tree, which is a type of self-balancing binary search tree. The Red-Black Tree ensures that the tree remains approximately balanced, providing O(log n) time complexity for insertion, deletion, and lookup operations.

        Here's a brief overview of a Red-Black Tree's properties:

        Node Colors: Each node is either red or black.
        Root Property: The root is always black.
        Leaf Property: All leaves (NIL nodes) are black.
        Red Property: Both children of a red node are black (i.e., no two red nodes can be adjacent).
        Black Height Property: Every path from a given node to its descendant NIL nodes has the same number of black nodes.
    */

    //we can use pair, set, vector data type as key in map,
    //MultiMap - sorted , duplicate keys allowed

    //multimap declaration ,key type is int and value type is string

    multimap<int, string> mp;

/*------------------------Inserting element in map-----------------------*/
    //using [] t.c : o(log(n)) n - size of map
    mp.insert({1, "abc"});

    //using insert
    mp.insert({2, "bde"});
    mp.insert(make_pair(3, "utr"));

    mp.insert({4, "bcr"});
    mp.insert({2, "btr"}); 

    //not allowed in multimap []
    //mp[5] = "nbc"; //gives error

    print(mp, "Inserting Element");

    /*it is not necessary that inserting element will always take logn , in some
      cases it may take more time
      Ex : map<string, string> mp , now if we put a large string as key , so internally
      it will compare with other strings 
      t.c : (comparing time with other string) o(s.size()) * o(log(n))
    */

/*----------------------Finding element----------------------------*/
    //find() - o(log(n))
    auto it = mp.find(2);
    //it will return iterator if found, if not found then return iterator pointing to mp.end()
    if(it != mp.end()){
        cout << "Element Found : " << it->first << " - " << it->second << endl; 
    }
    else{
        cout << "Not Found Element" << endl;
    }

/*--------------------Erasing element-------------------------*/
    //erase() - o(log(n));
    /*first occurences of 2 will be deleted if we used find becuase it will return
      iterator pointing to first occurence*/
    // if(it != mp.end()){
    //     mp.erase(it); // we can also pass iterator
       
    // }

    /* if we directly pass value then it will delete all occurences, because
       internally it gives iterator until all occurences are not deleted*/
    
    //we can also pass key

    //this code will delete all ocurences of 2
    mp.erase(2);

    //this code will delete all elements less than 2
    mp.erase(mp.begin(), mp.find(3));
    print(mp, "Erasing element");

    //clear() - o(n) 
    // mp.clear();
    // print(mp, "Clear map");

   //empty()  - 0 : not empty , 1 : empty
    cout <<"Map Empty - " << mp.empty() << endl;
    
/*---------------------Size / Count ------------------------*/

    //size o(1)
    cout << mp.size() << endl;

    //count o(log(n))
    //Returns the number of matches to element with key-value in the map
    if(mp.count(2)){
        cout << "Found element" << endl;
    }

/*---------------------Upper , Lower Bound --------------------*/

    multimap<int, int> mp1;
    mp1.insert({1, 20});
    mp1.insert({2, 30});
    mp1.insert({3, 5});
    mp1.insert({4, 60});
    mp1.insert({5, 40});
    mp1.insert({6, 80});

    print(mp1, "Lower upper bound");

    //Lower Bound - Returns an iterator to the first element that is not less than the specified key or equal key
    // o(log(n))
    auto it1 = mp1.lower_bound(2);
    cout <<"Lower Bound of 2 - " << it1->first << " " << it1->second << endl;

    auto it2 = mp1.lower_bound(7);
    cout <<"Lower Bound of 7 - " << it2->first <<" " << it2->second << endl;

    //Upper Bound - Returns an iterator to the first element that is greater than the specified key or equal key
    // o(log(n))
    auto it3 = mp1.upper_bound(2);
    cout <<"Upper Bound of 2 - " << it3->first <<" " << it3->second << endl;

    auto it4 = mp1.upper_bound(6);
    cout <<"Upper Bound of 6 - " << it4->first <<" " << it4->second << endl;

}