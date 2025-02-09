/*
    Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located 
    along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

    His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other 
    once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows
    to the stalls, such that the minimum distance between any two of them is as large as possible. 
    What is the largest minimum distance?
    
    Input
    t – the number of test cases, then t test cases follows.
    * Line 1: Two space-separated integers: N and C
    * Lines 2..N+1: Line i+1 contains an integer stall location, xi
    
    Output
    For each test case output one integer: the largest minimum distance.
    
    Example
    Input:
    1
    5 3
    1
    2
    8
    4
    9

    Output:
    3
    
    Output details:
    FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
    resulting in a minimum distance of 3.

*/

#include<bits/stdc++.h>
using namespace std;

int canPlaceCow(int mid, vector<int> &positions, int n, int cows){

    int lastPosition = -1;
    for(int i = 0; i < n; ++i){
        if(positions[i] - lastPosition >= mid || lastPosition == -1){
            cows--;
            lastPosition = positions[i];
        }
        if(cows == 0){
            break;
        }
    }

    return cows == 0;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, cows;
        cin >> n >> cows;

        vector<int> positions(n);
        for(int i = 0; i < n; ++i){
            int ele;
            cin >> ele;
            positions[i] = ele;
        }

        //positions may not be in sorted order so we need to sort them
        sort(begin(positions), end(positions));

        //int start = 0, end = positions[n-1] - positions[0]; //this is also correct
        int start = 0, end = 1e9;

        //canPlaceCow() - is a predicate function , it means it will return either true or false
        //TTTTTTTFFFFFF
        //FFFFFTTTTTTTT
        while(end - start > 1){
            int mid = start + (end - start) / 2;
            if(canPlaceCow(mid, positions, n, cows)){
                //this is true case that why we assign mid , because that mid can be our answer
                start = mid;
            }
            else{
                //this is false case that why we assign mid - 1 , because this mid can never be our answer
                end = mid - 1;
            }
        }

        if(canPlaceCow(end, positions, n, cows)){
            cout << "Largest minimum distance : " << end << endl;
        }
        else{
            cout << "Largest minimum distance : " << start << endl;
        }
    }

}
