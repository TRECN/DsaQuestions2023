// https://leetcode.com/problems/unique-paths-ii/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int DP(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i>=0 && j>=0 && grid[i][j]==1)
            return 0;
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int up=DP(i-1,j,grid,dp);
        int left=DP(i,j-1,grid,dp);
        return dp[i][j]=left+up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector <vector<int>> dp(m,vector<int> (n,-1));
        return DP(m-1,n-1,grid,dp);
    }
};