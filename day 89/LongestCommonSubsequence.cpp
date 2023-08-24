// https://leetcode.com/problems/longest-common-subsequence/description//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    string t1,t2;
    int n,m;
    vector<vector<int>>dp;
    int DP(int i,int j){
        if(i>=n||j>=m)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(t1[i]==t2[j])
            return dp[i][j]=1+DP(i+1,j+1);
        else
            return dp[i][j]=max(DP(i+1,j),DP(i,j+1));
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        n=text1.size();m=text2.size();
        t1=text1;
        t2=text2;
        dp.resize(n,vector<int>(m,-1));
        return DP(0,0);
    }
};