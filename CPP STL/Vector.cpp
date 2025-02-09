#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v, string str){

    cout << str << endl;
    for(int &value : v){
        cout << value << " ";
    }
    cout << endl;
}

int main(){

    //without size declaration
    vector<int> v1;

    //vector declaration with size 5
    vector<int> v2(5);

    //vector with specific size and default value
    vector<int> v3(5, 0);

    //vector declaration & intialization with another vector
    vector<int> v4(begin(v3), end(v3));

    /*Inserting value*/
    vector<int> temp1;
    
    //push_back() insert element at end o(1)
    temp1.push_back(5); 
    temp1.push_back(4);
    temp1.push_back(2);
    
    //insert(position, value) element at specific position o(n)
    //we need to pass iterator then add index
    //if we pass simply index it will give error
    temp1.insert(temp1.begin() + 1, 8);

    //Constructs and inserts an element in the vector o(n) in worst case
    temp1.emplace(temp1.begin() + 2, 7);
    
    //Constructs and inserts an element at the end of the vector. o(1)
    temp1.emplace_back(9);

    print(temp1, "Inserting element");

    /*Accessing element at specific index*/
    vector<int> temp2 = {1, 2, 5, 3, 7, 8, 6};

    print(temp2, "Accessing element");

    // [] bracket - o(1)
    cout << "Using [] bracket - " << temp2[3] << endl;
    
    //returns first element o(1)
    cout << "Front value - " << temp2.front() << endl;

    //return last element o(1)
    cout << "Back value - " << temp2.back() << endl;

    //at(index) o(1)
    cout << "At method - " << temp2.at(5) << endl;

    /*Deleting element*/
    vector<int> temp3 = {1, 2, 5, 3, 7, 8, 6};
    print(temp3, "Deleting element");

    //pop_back() deletes last element - o(1)
    temp3.pop_back();
    print(temp3, "Pop Back Method");

    //erse(index) removes specific element present at index o(n)
    //need to pass iterator
    temp3.erase(temp3.begin() + 3);
    print(temp3, "Erase Method");

    //clear() removes all element o(n)
    temp3.clear();
    print(temp3, "Clear Method");

    /*Size or Capacity*/
    vector<int> temp4 = {1, 2, 5, 3, 7, 8, 6};
    print(temp4, "Size or capacity");

    //size() - tells size of vector o(1)
    cout <<" Size : " << temp4.size() << endl;

    //empty() - tells vector is empty or not o(1)
    // 0 - not empty , 1 - empty
    cout << temp4.empty() << endl;
    cout << temp3.empty() << endl;

    //capacity() - Returns the size of the storage space currently allocated for the vector o(1)
    cout << temp4.capacity() << endl;
    cout << temp3.capacity() << endl;

    /*Swap*/
    //Swaps the contents with another vector t.c : o(1)
    vector<int> temp5 = {1, 2, 5, 3, 7, 8, 6};
    vector<int> temp6 = {5, 6, 4, 1, 8, 9};

    print(temp5, "Before swap");
    print(temp6, "Before swap");

    temp5.swap(temp6);

    print(temp5, "After swap");
    print(temp6, "After swap");

    /*Iterartors*/
    vector<int> temp7 = {1, 2, 5, 3, 7, 8, 6};

    //Returns an iterator to the beginning o(1)
    cout << *(temp7.begin()) << endl;

    //Returns an iterator to the end (points to location after last element) o(1)
    cout << *(temp7.end()) << endl;

    //Returns a reverse iterator to the beginning. o(1)
    cout << *(temp7.rbegin()) << endl;

    //Returns a reverse iterator to the end. o(1)
    cout << *(temp7.rend()) << endl;
     
}