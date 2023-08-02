// https://leetcode.com/problems/01-matrix/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dist(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                    dist[i][j]=0;
                }
            }
        }

        int row[]={-1,0,+1,0};
        int col[]={0,+1,0,-1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int d=q.front().second;
            q.pop();
            dist[r][c]=d;
            for(int i=0;i<4;i++){
                int Nrow=r+row[i];
                int Ncol=c+col[i];
                if(Nrow>=0&&Ncol>=0&&Nrow<n&&Ncol<m&&vis[Nrow][Ncol]!=1){
                    vis[Nrow][Ncol]=1;
                    q.push({{Nrow,Ncol},d+1});
                }
            }
        }
        return dist;
    }
};