// https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1?page=1&difficulty[]=0&category[]=Searching&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
             if(arr[mid]==0){
                r=mid-1;
            }else{
                l=mid+1;

            }
            
        }
        return (n-l);
        
    }
};

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
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}