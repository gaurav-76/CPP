#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {3, 2, 1, 6, 7, 3, 8};

    //minimum element
    /* min_element(begin(v), end(v)) - this will return iterator pointing
       to min element. We are using * so that we can get value
    */
    int min = *min_element(begin(v), end(v));
    cout << "Minimum value : " << min << endl;

    //gives min between 2 elements
    int mini = min(2, 3);
    //for multiple values we can write in this way
    int mini1 = min({2, 4, 5, 1, 7});

    //maximum element
    int max = *max_element(begin(v), end(v));
    cout << "Maximum value : " << max << endl;

    //gives max between 2 elements
    int maxi = max(2, 3);
    //for multiple values we can write in this way
    int maxi1 = max({2, 4, 5, 1, 7});

    //sum of vector v
    //3rd parameter is intial sum value / or you can pass any variable
    int sum = accumulate(begin(v), end(v), 0);
    cout << "Sum : " << sum << endl;

    //count of specific element
    int cnt =  count(begin(v), end(v), 3);
    cout << "Count of element 3 : " << cnt << endl;

    //find
    auto it = find(begin(v), end(v), 3);
    if(it != v.end()){
        cout << "Element found at index : " << it - begin(v) << endl;
    }
    else{
        cout << "Element not found : " << endl;
    }

    //reverse element
    reverse(begin(v), end(v));
    cout << "Reverse : ";
    for(int &ele: v){
        cout << ele << " ";
    }
    cout << endl;

    string str = "gauravkumar";
    reverse(begin(str), end(str));
    cout << "Reverse String : " << str << endl;
}