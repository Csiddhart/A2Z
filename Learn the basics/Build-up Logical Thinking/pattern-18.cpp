Pattern 18 :- https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_18




//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++){
           char character='A'+(n-1);       //catch    //first element ta k always E diye e initialize kore rekhe dicchi and YES tumi start E diye korteh parbe nah, YOU have to start from A.
           for(int j=0;j<i+1;j++){
               cout<<character<<" ";
               character--;               //catch
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
