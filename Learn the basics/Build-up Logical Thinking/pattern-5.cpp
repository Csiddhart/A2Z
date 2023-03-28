Pattern 5 :-https://practice.geeksforgeeks.org/problems/triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_5

class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
	}
};
