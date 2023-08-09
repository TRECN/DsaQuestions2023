// https://leetcode.com/problems/number-of-islands/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    
    void dfs(vector<vector<char>>& grid, int i, int j, int& n,int& m,vector<vector<int>>&vis){
        if(i>=n||j>=m||i<0||j<0)
            return;
        if(grid[i][j]=='0'||vis[i][j]==1)
            return;

        vis[i][j]=1;
        dfs(grid, i + 1, j, n, m,vis);
        dfs(grid, i - 1, j, n, m,vis);
        dfs(grid, i, j + 1, n, m,vis);
        dfs(grid, i, j - 1, n, m,vis);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(grid[i][j]=='1'&&vis[i][j]!=1){
                    ans++;
                    dfs(grid,i,j,n,m,vis);
                }
            }
        }
        return ans;
    }
};