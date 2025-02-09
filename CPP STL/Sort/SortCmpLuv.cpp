#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool cmp(int a, int b){
    //if want to swap than return false
    //else want same order then return true

    //in this case we want to sort on decreasing order
    //so if a will be less than b then it will return false
    //if false return then swapping happen
    //and we will get element in decreasing order
    return a > b;
}

int main(){

    //if want to sort in vector then just do this
   //sort(begin(vec), end(vec));

    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    cout << "Before sorting : ";
    print(arr, n);

    //by default sorting will happen in increasing order
    //sort(pointer to first idx, pointer to last idx)
    //if we want to sort only 2 element than we can wrtite : sort(arr, arr+2)
    sort(arr, arr+n);

    cout << "After sorting (Increasing Order): ";
    print(arr, n);

    //changing order of sorting
    cout << "Changing order of sorting (Decreasing Order): ";
    sort(arr, arr+n, greater<int>());
    print(arr, n);

    /*
        Another way we can change the logic of swapping by passing an 
        parameter cmp and then we can define the logic of that function
    */

   cout << "Passing CMP Parameter : ";
   sort(arr, arr+n, cmp);
   print(arr, n);

    
}