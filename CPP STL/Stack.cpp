#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;

    //inserting element
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Size : " << st.size() << endl;

    while(!st.empty()){
        //top will give topmost element of stack
        cout << st.top() << " ";
        //pop topmost element
        st.pop();
    }

    
}