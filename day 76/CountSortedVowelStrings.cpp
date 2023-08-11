// https://leetcode.com/problems/count-sorted-vowel-strings/submissions/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>>dp(5,vector<int>(n+1,-1));
        return recursion(0,n,dp);
    }
    int recursion(int i,int n,vector<vector<int>>&dp){
        if(n==0)return 1;
        if(i>=5)return 0;
        if(dp[i][n]!=-1)return dp[i][n];
        int pick=recursion(i,n-1,dp);
        int notPick=recursion(i+1,n,dp);
        return dp[i][n]=pick+notPick;
    }
};