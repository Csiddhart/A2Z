Pattern 10 :- https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718013/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_10


//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        for(int i=0;i<n-1;i++){
            for(int j=0;j<i+1;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};
