#include<bits/stdc++.h>
using namespace std;

int main(){

/*-------------------------Lambda Function ------------------------*/

    //assume we want to add 2 in the integer x
    //[](int x){return x + 2;} - function name 
    //(2) - passing parameter
    cout << [](int x){return x + 2;}(2) << endl;

    //now we want to add 2 number
    auto sum = [](int x, int y){ return x + y;};
    cout << sum(3, 4) << " " << sum(8, 9) << endl;

/*-------------------------all_of, any_of, none_of---------------*/

    //all_of - jab saare true honge to true return hoga
    //any_of - jab ek bhi value satisfy condition to return true hoga
    //none_of - jab koi bhi value not satisfy tab true return hoga

    vector<int> v = {7, 3, 5};

    // 1 - true , 0 - false
    cout << "Checking all no positive : " << all_of(begin(v), end(v), [](int x){return x > 0;}) << endl;
    cout << "Checky any no negative : " << any_of(begin(v), end(v), [](int x){return x < 0;}) << endl;
    cout << "Checking no number is even : " << none_of(begin(v), end(v), [](int x){return x % 2 == 0;}) << endl;

}