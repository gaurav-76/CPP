#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> que;

    //inserting element
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);

    cout << "Size : " << que.size() << endl;

    while(!que.empty()){
        //front will give front element of queue
        cout << que.front() << " ";
        //pop front element
        que.pop();
    }

    
}