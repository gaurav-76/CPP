#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(int &ele: v){
        cout << ele << " ";
    }
    cout << endl;
}

int main(){

/*--------------Binary Search---------------------*/
    vector<int> v = {1, 2, 3, 4, 5, 6};

    //binary_search(startaddress, endaddress, valuetofind)
    
    //Returns : true if an element equal to valuetofind is found, else false.

    cout << binary_search(begin(v), end(v), 3) << endl;

/*---------------------Modifying Sequence Operations ----------------*/
    
    //copy(start_iterator, end_iterator, destination_start_iterator);
    
    //we need to also intialize the vector with size
    vector<int> v1(6);
    copy(begin(v), end(v), begin(v1));
    cout << "Copy : ";
    print(v1);


    //swap(T& a, T& b);
    
    // a and b can be variable or any complex data structure like vector
    int x = 10, y = 20;
    swap(x, y);
    cout << "Swap : "<< x << " - " << y << endl;

    vector<int> v2 = {9, 4, 7, 6, 5};
    swap(v1, v2);
    cout << "After swap " << endl;
    print(v1);
    print(v2);


    //replace(start_iterator, end_iterator, old_value, new_value);
    
    //Replaces all occurrences of a specified value in a range with another value.
    vector<int> v3 = {1, 2, 3, 2, 4, 2};
    replace(begin(v3), end(v3), 2, 7);
    cout << "Replace : ";
    print(v3);


    //fill(start_iterator, end_iterator, value);
    
    //Assigns the given value to every element in a specified range.
    fill(begin(v3), end(v3), 0);
    cout << "Fill : ";
    print(v3);


    // memset(void* ptr, int value, std::size_t num);
    
    //Sets a block of memory to a specified value, typically used with arrays or raw memory.
    //it works well with plain arrays and simple data types, for vectors we can use fill method
    char arr[10];
    memset(arr, 'C', sizeof(arr));
    cout << "Memset : ";
    for(char &ch: arr){
        cout << ch << " ";
    }
    cout << endl;


    //remove
    //Removes all elements equal to a specific value in a range by shifting the remaining elements to the front. 
    //It doesn't actually reduce the container size; instead, it returns an iterator to the new logical end of the container.
    
    //remove(start_iterator, end_iterator, value);
    // std::vector<int> vec = {1, 2, 3, 2, 4, 2};

    // auto new_end = std::remove(vec.begin(), vec.end(), 2);  // Remove all 2s

    // vec.erase(new_end, vec.end());  // Erase the "removed" elements

    // for (int i : vec) {
    //     std::cout << i << " ";  // Output: 1 3 4
    // }

    

    //erase(start_iterator)
    vector<int> v4 = {1, 2, 3, 4, 5};
    v4.erase(begin(v4) + 2); // erase 3rd element
    cout << "Erase : ";
    print(v4);

    //unique(start_iterator, end_iterator);
    
    //Removes consecutive duplicate elements in a range. Returns an iterator to the end of the unique range.
    // std::vector<int> vec = {1, 2, 2, 3, 3, 4, 4};

    // auto new_end = std::unique(vec.begin(), vec.end());  // Remove consecutive duplicates

    // vec.erase(new_end, vec.end());  // Erase the "removed" elements

    // for (int i : vec) {
    //     std::cout << i << " ";  // Output: 1 2 3 4
    // }

    
    //rotate(start_iterator, middle_iterator, end_iterator);
    
    //Rotates the elements in the range such that the element at the middle iterator becomes the first element.
    vector<int> v5 = {1, 2, 3, 4, 5, 6, 7};
    rotate(begin(v5), begin(v5) + 3, end(v5)); //// Rotate left by 3 positions
    cout << "Rotate : ";
    print(v5);


/*----------------------Sorting Operations: ---------------------*/

    //is_sorted()
    //bool is_sorted(start_iterator, end_iterator);
    //bool is_sorted(start_iterator, end_iterator, comparator);
    
    //Checks if the elements in a range are sorted in non-decreasing order.
    vector<int> v6 = {1, 2, 3, 5, 6};
    bool isSorted = is_sorted(begin(v6), end(v6));
    if(isSorted){
        cout << "is sorted : "<< "Sorted vector 6 " << endl;
    }
    else{
        cout << "Not sorted " << endl;
    }


    //sort()
    //sort(start_iterator, end_iterator);
    //sort(start_iterator, end_iterator, comparator);
    
    //Sorts the elements in a range in non-decreasing order.
    vector<int> v7 = {3, 5, 2, 0, 4};
    cout << "Before Sorting : ";
    print(v7);
    sort(begin(v7), end(v7));
    cout << "After Sorting : ";
    print(v7);
    

    //partial_sort()
    //partial_sort(start_iterator, middle_iterator, end_iterator);
    //partial_sort(start_iterator, middle_iterator, end_iterator, comparator);
    
    //Rearranges the elements in a range such that the first middle elements are sorted, 
    //and the remaining elements are in an unspecified order.
    vector<int> v8 = {3, 1, 4, 1, 5, 9};
    cout << "Before partial sorting : ";
    print(v8);
    partial_sort(begin(v8), begin(v8) + 3, end(v8)); //first 3 elements are sorted
    cout << "After partial sorting : ";
    print(v8);


    //nth_element()
    //nth_element(start_iterator, nth_iterator, end_iterator);
    //nth_element(start_iterator, nth_iterator, end_iterator, comparator);
    
    //Rearranges the elements in the range such that the element at the nth position 
    //is the one that would be in that position if the entire range was sorted. 
    //All elements before this nth element are less than or equal to the elements after it.

    //avg t.c : o(n) , worst case : o(n^2)
    vector<int> v9 = {3, 1, 4, 5, 9, 6, 8, 2};
    cout << "Before nth_element : ";
    print(v9);
    //we want if element were sorted at idx 2 what element then,
    nth_element(begin(v9), begin(v9) + 2, end(v9));
    cout << "After nth_element : " << v9[2] << endl;
    print(v9);

    //equal()
    //bool equal(first vec start iterator, first vect end iterator, second vec start iterator);
    if(equal(begin(v8), end(v8), begin(v9))){
        cout << "Vector 8 and 9 are equal" << endl;
    }
    else{
        cout << "Vector 8 and 9 are not equal" << endl;
    }

}