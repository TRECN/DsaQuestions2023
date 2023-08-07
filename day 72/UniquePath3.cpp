// https://leetcode.com/problems/unique-paths-iii/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int freeCell=1;
    int ans;
    void DFS(int X,int Y,vector<vector<int>>& grid,int count){
        if(X<0||X>=grid.size()||Y<0||Y>=grid[0].size()||grid[X][Y]==-1)return;
        if(grid[X][Y]==2){
            if(count==freeCell){
                ans++;
            }
            return;
        }
        grid[X][Y]=-1;
        DFS(X+1,Y,grid,count+1);
        DFS(X-1,Y,grid,count+1);
        DFS(X,Y+1,grid,count+1);
        DFS(X,Y-1,grid,count+1);
        grid[X][Y]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int X=0;
        int Y=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    X=i;
                    Y=j;
                }
                else if(grid[i][j]==0)
                    freeCell++;

            }
        }
        DFS(X,Y,grid,0);
        return ans;
    }
};