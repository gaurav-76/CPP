#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter array size : ";
    cin >> n;

    vector<int>vec(n);

    cout << "Enter element in sorted order : " << endl;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        vec[i] = a;
    }

    int element;
    cout << "Element you want to search : ";
    cin >> element;

    //Binary Search
    int start = 0, end = n-1;

    //this is new termination condition
    //at the end we will separately check end and start value with searched value
    while(end - start > 1){

        int mid = start + (end - start) / 2;
        if(vec[mid] < element){
            start = mid + 1;
        }
        else{
            //we are doing mid - 1 because the mid element can be our searched element
            end = mid;
        }
    }

    if(vec[start] == element){
        cout << "Element found at index : " << start << endl;
    }
    else if(vec[end] == element){
        cout << "Element found at index : " << end << endl;
    }
    else{
        cout << "Not Found " << endl;
    }
}