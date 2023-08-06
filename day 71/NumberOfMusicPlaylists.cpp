// https://leetcode.com/problems/number-of-music-playlists/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int MOD = 1e9+7;
    ll recursion(int n,int goal,int k,vector<vector<int>>&dp){
        if(n==0&&goal==0)return 1;
        if(n==0||goal==0)return 0;
        if(dp[n][goal]!=-1)return dp[n][goal];
        ll yes = recursion(n-1,goal-1,k,dp)*n;
        ll no =  recursion(n,goal-1,k,dp)*max(n-k,0);
        return dp[n][goal]=(yes+no)%MOD;
    }
    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<int>>dp(n+1,vector<int>(goal+1,-1));
        return recursion(n,goal,k,dp);
    }
};