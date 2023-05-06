// https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1?page=2&difficulty[]=0&status[]=solved&category[]=Arrays&sortBy=submissions
#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d=(arr[n-1]-arr[0])/n;
        int l=0,r=n-1;
        while(l<=r){
            int m=(r+l)/2;
            int v=arr[0]+(d*m);
            if(arr[m]==v)
                l=m+1;
            else 
                r=m-1;
        }
        return arr[r]+d;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
