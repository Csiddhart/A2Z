Pattern 12 :- https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_11


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
       int spaces =2*n-2;
       for(int i=0;i<n;i++){
           for(int j=0;j<i+1;j++){
               cout<<j+1<<" ";
           }
           for(int j=0;j<spaces;j++){
               cout<<" "<<" ";
           }
           for(int j=i;j>=0;j--){
               cout<<j+1<<" ";
           }
           spaces -=2;
           cout<<endl;
       }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
