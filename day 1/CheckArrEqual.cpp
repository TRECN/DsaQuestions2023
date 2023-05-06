// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;
#define ll long long 


class Solution{
    public:

    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int>a;
        for(auto i:A){
            a[i]++;
        }
        for(auto i:B){
            if(a.find(i)!=a.end())
                a[i]--;
            else 
                return false;
        }
        for(auto i:A){
            if(a[i]!=0)
                return false;
        }
        return true;
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
