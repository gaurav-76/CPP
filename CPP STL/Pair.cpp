#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* 
        A pair is a simple container that stores two values, which may
        be of different types. It is implemented as a struct or template 
        class that holds two public member variables, typically named first
        and second
    */

    //declaration
    pair<int, string> p;
    
    //initialization
    p.first = 1;
    p.second = "Gaurav";
    
    p = make_pair(2,"Raman");
    
    p = {3, "Gaurav"};
    
    
    //declaration + initializarion
    pair<int, string> p1 = make_pair(1, "gaurav");
    
    pair<int, string> p2 = {2, "raman"};
    
    pair<int, string> p3(2, "guarav");
    
    cout<< p3.first << " " << p3.second;
    

    return 0;
}