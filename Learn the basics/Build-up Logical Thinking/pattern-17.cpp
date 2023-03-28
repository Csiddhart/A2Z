Pattern 17:- https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1/?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17



//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
       for(int i=0;i<n;i++){
           char character='A';
           for(int j=0;j<(n-i-1);j++){
               cout<<" ";
           }
           for(int j=0;j<2*i+1;j++){
               cout<<character;
        if(j>=i){
            character--;
        }
        else{
            character++;
        }
           }
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
