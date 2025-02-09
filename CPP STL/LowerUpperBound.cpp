#include <bits/stdc++.h> 
int main() 
{ 
    //vector should be sorted if you want to use lower or upper bound
    //t.c: o(log(n))
    std::vector<int> v{ 10, 20, 30, 30, 50}; 
  
    // Print vector 
    std::cout << "Vector contains :"; 
    for (unsigned int i = 0; i < v.size(); i++) 
        std::cout << " " << v[i]; 
    std::cout << "\n"; 
  
    std::vector<int>::iterator low, upp; 
 
    //lower_bound(starting idx pointer, end idx point, element)
    // lower bound return first element which is ≥ value. If not (that element or > value present), return end().
    //if value not found then next greater element will be returned
    //if multiple occurences of that element is present, then address of first occurences will return
    std::cout<<"******* lower_bound *********"<<std::endl;
    low = std::lower_bound(v.begin(), v.end(), 20); 
    std::cout << "\nlower_bound for element 20 at position : " << (low - v.begin()); 
    low = std::lower_bound(v.begin(), v.end(), 25); 
    std::cout << "\nlower_bound for element 25 at position : " << (low - v.begin())<<std::endl; 
    
    // upper bound return first element which is > value. If not (> value present), return end().
    //if value not found then next greater element will be returned
    std::cout<<"****** upper_bound ************"<<std::endl;
    upp = std::upper_bound(v.begin(), v.end(), 30); 
    std::cout << "\nupper_bound for element 30 at position : " << (upp - v.begin()); 
     upp = std::upper_bound(v.begin(), v.end(), 25); 
    std::cout << "\nupper_bound for element 25 at position : " << (upp - v.begin()); 
  

    //in vector binary search implemented for lower or upper bound
    //in vector bst tree is implemented for lower or upper bound
    //set
    //upper_bound(st.begin(), st.end(), 30);  this will take o(n)
    //st.upper_bound(30) // this is optimized way o(log(n)) same for lower bound

    //map
    //upper_bound(mp.begin(), mp.end(), 30);  this will take o(n)
    //mp.upper_bound(30) // this is optimized way o(log(n)) same for lower bound
    //in case of map key's upper and lower bound is search

    return 0; 
}