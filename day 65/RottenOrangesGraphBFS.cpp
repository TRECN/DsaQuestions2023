// https://leetcode.com/problems/rotting-oranges/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        // {{r,c},d}
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>visited(n,vector<int>(m,0));
        int Rcount=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    visited[i][j]=2;
                    
                }
                if(grid[i][j]==1)Rcount++;
            }
        }
        int day=0;
        int Trow[]={-1,0,1,0};
        int Tcol[]={0,1,0,-1};
        int Rcount1=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int d=q.front().second;
            day=max(day,d);
            q.pop();
            for(int i=0;i<4;i++){
                int Nrow=r+Trow[i];
                int Ncol=c+Tcol[i];
                if(Nrow>=0 && Ncol>=0 && Nrow<n && Ncol<m && visited[Nrow][Ncol]!=2 && grid[Nrow][Ncol]==1){
                    q.push({{Nrow,Ncol},d+1});
                    visited[Nrow][Ncol]=2;
                    Rcount1++;
                }
            }
        }
        if(Rcount!=Rcount1)return -1;
        return day;
    }
};