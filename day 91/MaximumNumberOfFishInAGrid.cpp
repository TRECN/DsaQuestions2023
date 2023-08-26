// https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int h[4]={0,0,-1,1};
        int v[4]={-1,1,0,0};
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vector<vector<int>>visi(n,vector<int>(m,0));
                if(!grid[i][j])
                    continue;
                int sum=0;
                queue<pair<int,pair<int,int>>>q;
                visi[i][j]=1;
                q.push({grid[i][j],{i,j}});
                while(!q.empty()){
                    int fish=q.front().first;
                    int x=q.front().second.first;
                    int y=q.front().second.second;
                    q.pop();
                    sum+=fish;
                    for(int k=0;k<4;k++){
                        int Nx=x+h[k];
                        int Ny=y+v[k];
                        if(Nx<n&&Nx>=0&&Ny>=0&&Ny<m&&!visi[Nx][Ny]&&grid[Nx][Ny]){
                            q.push({grid[Nx][Ny],{Nx,Ny}});
                            visi[Nx][Ny]=1;
                        }
                    }
                }
                maxi=max(sum,maxi);
            }
        }
        return maxi;
    }
};