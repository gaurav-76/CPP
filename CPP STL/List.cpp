#include<bits/stdc++.h>
using namespace std;

void print(list<int> list){
    for(int ele: list){
        cout << ele << " ";
    }
    cout << endl;
}

int main(){

    // internally implemented using doubly linked list
    list<int> list1 = {3, 7, 6, 5, 9, 5, 10};

    cout << "List Element : ";
    print(list1);

    //push_front()
    list1.push_front(2);
    cout << "List After element inserted at front" << endl;
    print(list1);

    //push_back()
    list1.push_back(3);
    cout << "List After element inserted at back" << endl;
    print(list1);

    //front()
    cout << "First element in list : "<< list1.front() << endl;

    //back()
    cout << "Last element in list : "<< list1.back() << endl;

    //pop_front()
    list1.pop_front();
    cout << "List After element deleted at front" << endl;
    print(list1);

    //pop_back()
    list1.pop_back();
    cout << "List After element deleted at back" << endl;
    print(list1);

    //insert(index, no of elements, val) – Inserts new elements in the list before the element at a specified position.
    list1.insert(begin(list1), 11);
    cout << "List After inserting element at start" << endl;
    print(list1);

    //size() - Returns the number of elements in the list.
    cout << "Size of list : " << list1.size() << endl;

    //begin() - begin() function returns an iterator pointing to the first element of the list.
    cout << "Iterator pointing to first element : " << *(begin(list1)) << endl;


    //end() - end() function returns an iterator pointing to the theoretical last element which follows the last element.
    //this will give some garbage value
    //because end points to address after the last element
    cout << "Iterator pointing to last element : " << *(end(list1)) << endl;


    //empty() - Returns whether the list is empty(1) or not(0).
    cout << "List is empty or not : " << list1.empty() << endl;

    //erase() - Removes a single element or a range of elements from the list.
    //erase first element
    list1.erase(begin(list1));
    cout << "List elements after erasing first element" << endl;
    print(list1);

    //range of elements
    auto it2 = begin(list1);
    advance(it2, 2);
    list1.erase(begin(list1), it2);
    cout << "List elements after erasing index [0 1] total 2 elements" << endl;
    print(list1);

    //remove() - Removes all the elements from the list, which are equal to a given element.
    cout << "List before removing element 5 : ";
    print(list1);
    list1.remove(5);
    cout << "List after removing element 5 : ";
    print(list1);
    

    //reverse() - Reverses the list.
    cout << "Before reverse : ";
    print(list1);
    list1.reverse();
    cout << "After reverse : ";
    print(list1);

    //sort() - Sorts the list in increasing order.
    list1.sort();
    cout << "List after sorting : ";
    print(list1);

    //swap() - This function is used to swap the contents of one list with another list.
    list<int> l1 = {1, 2, 3, 4, 5};
    list<int> l2 = {6, 7, 8, 9, 10};

    cout << "Before swapping : " << endl;
    cout << "List 1 : ";
    print(l1);
    cout << "List 2 : ";
    print(l2);

    l1.swap(l2);

    cout << "After swapping : " << endl;
    cout << "List 1 : ";
    print(l1);
    cout << "List 2 : ";
    print(l2);


    //merge() - Merges two sorted lists into one.
    l1.merge(l2);
    cout << "L1 and L2 after merging : " << endl;
    print(l1);

    //clear() - clear() function is used to remove all the elements of the list container, thus making it size 0.
    l1.clear();
    //empty() - Returns whether the list is empty(1) or not(0).
    cout << "List1 is empty or not : " << l1.empty() << endl;

    l1 = {1, 1, 2, 3, 2, 4, 4};
    cout << "List 1 before removing consecutive same element" << endl;
    print(l1);
    
    //unique() - Removes all duplicate consecutive elements from the list.
    l1.unique();
    cout << "List 1 after removing consecutive same element" << endl;
    print(l1);

}