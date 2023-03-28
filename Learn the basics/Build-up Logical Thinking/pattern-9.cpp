Pattern :- https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9

class Solution {
  public:
    void printDiamond(int n) {
                for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<(i+1);j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<(n-(i));j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};
