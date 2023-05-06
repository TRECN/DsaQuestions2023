
// https://practice.geeksforgeeks.org/problems/greater-on-right-side4305/1?page=3&difficulty[]=-1&category[]=Arrays&sortBy=submissions

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	void nextGreatest(int arr[], int n) {
	    int x=arr[n-1];
        for(int i=n-1;i>0;i--){
            if(arr[i]>x)
                x=arr[i];
            else
                arr[i]=x;
        }
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
	    arr[n-1]=-1;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
