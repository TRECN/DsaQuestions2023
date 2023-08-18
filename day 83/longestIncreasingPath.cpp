// https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int n,m;
    vector<vector<int>>dp;
    int dfs(int i,int j,vector<vector<int>>&matrix,int pre){
        int a,b,c,d;
        if(i>=n||j>=m||i<0||j<0||matrix[i][j]<=pre)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        a=dfs(i+1,j,matrix,matrix[i][j]);
        b=dfs(i-1,j,matrix,matrix[i][j]);
        c=dfs(i,j+1,matrix,matrix[i][j]);
        d=dfs(i,j-1,matrix,matrix[i][j]);
        return dp[i][j]=max({a,b,c,d})+1;
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        int ans=0;
        dp.resize(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=max(ans,dfs(i,j,matrix,-1));
            }
        }
        return ans;
    }
};