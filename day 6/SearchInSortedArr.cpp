// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?page=1&difficulty[]=-1&category[]=Searching&sortBy=submissions
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       int l=0;
       int r=N-1;
       while(l<=r){
           int mid=(l+r)/2;
           if(arr[mid]==K)
                return 1;
            else if(arr[mid]>K)
                r=mid-1;
            else 
                l=mid+1;
       }
       return -1;
       
    }
};



int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
