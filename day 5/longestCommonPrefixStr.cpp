// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string ans = "";
        bool t = true;
        for(int i=0;i<arr[0].length();i++) {
            char ch = arr[0][i];
            
            for(int j=1;j<N;j++) {
                if(ch != arr[j][i] || arr[j].length()<i) {
                    t = false;
                    break;
                }
            }
            if(t == false) {
                break;
            }
            else {
                ans.push_back(ch);
            }
        }
        if(ans.empty()) {
            return "-1";
        }
        return ans;
        
    }
};
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}