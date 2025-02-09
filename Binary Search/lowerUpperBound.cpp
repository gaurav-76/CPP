#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &vec, int element){

    // lower bound return first element which is ≥ value. If not (that element or > value present), return end().

    int n = vec.size();
    int start = 0, end = n-1;

    while(end - start > 1){
        int mid = start + (end - start) / 2;
        if(vec[mid] < element){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }

    //we first check start idx element then end idx element
    if(vec[start] >= element){
        return start;
    }

    if(vec[end] >= element){
        return end;
    }

    return -1;
}

int upperBound(vector<int> &vec, int element){

    // upper bound return first element which is > value. If not (that element or > value present), return end().

    int n = vec.size();
    int start = 0, end = n-1;

    while(end - start > 1){
        int mid = start + (end - start) / 2;
        //code change compare to lower bound code
        //we will be considering == case in if condition this time 
        // as we want only > element
        if(vec[mid] <= element){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }

    //we first check start idx element then end idx element
    //code change compare to lower bound code insted of >= should be >
    if(vec[start] > element){
        return start;
    }

    if(vec[end] > element){
        return end;
    }

    return -1;
}

int main(){

    /* we will be implementing lower bound and upper bound function 
        of cpp stl
    */

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
    cout << "Element you want to find(lower , upper bound) : ";
    cin >> element;

    int lidx = lowerBound(vec, element);
    cout << "Lower bound of " << element << " (index, element): " << lidx << " " <<  (lidx != -1 ? vec[lidx] : -1) << endl;

    int uidx = upperBound(vec, element);
    cout << "Upper bound of " << element << " (index, element): " << uidx << " " <<  (uidx != -1 ? vec[uidx] : -1) << endl;

}