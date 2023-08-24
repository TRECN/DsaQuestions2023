// https://leetcode.com/problems/longest-palindromic-subsequence/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        int n=s1.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    dp[i][j]=(s[i-1]==s1[j-1])?1+dp[i-1][j-1]:max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
};