//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[],int s,int e){
    int mid = (s + e)/2;
    int len1 = mid - s + 1;  //mid is common in both
    int len2 = e - mid;      //mid is common in both
    int *left = new int[len1]; // Dyanamically creating the left array of size len1
    int *right = new int[len2]; // Dyanamically creating the right array of size len2
    // Copy the values into left array
    int k = s;
    for(int i = 0;i < len1; i++){
        left[i] = arr[k++];
    }
    // Copy the values into right array
    k = mid + 1;
    for(int i = 0;i < len2; i++){
        right[i] = arr[k++];
    }
    // Merge 2 sorted arrays logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    // Run loop until any one array finishes
    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){ // Left value is lesser so place that value in mainArray
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{ // Right value is lesser
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    // Left array is bigger in size so simply copy these values into main array
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    // Right array is bigger in size so simply copy these values into main array
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // Delete left and right array to save space
}
void mergeSort(int arr[],int s,int e){
    if(s >= e) // Single element remaining or invalid array
        return;
    int mid = s + (e-s)/2;
    // Left part sort
    mergeSort(arr,s,mid);
    // Right part sort
    mergeSort(arr,mid + 1,e);
    // Merge the sorted arrays
    merge(arr,s,e);
}
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
