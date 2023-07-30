// https://leetcode.com/problems/flood-fill/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        visited[sr][sc]=1;
        int clr=image[sr][sc];
        int Trow[4]={-1,0,1,0};
        int Tcol[4]={0,-1,0,1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;

            q.pop();
            for(int i=0;i<4;i++){
                int Nrow=r+Trow[i];
                int Ncol=c+Tcol[i];
                if(Nrow>=0&&Ncol>=0&&Nrow<n&&Ncol<m&&visited[Nrow][Ncol]==0){
                    if(image[Nrow][Ncol]==clr){
                        q.push({Nrow,Ncol});
                        visited[Nrow][Ncol]=1;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==1){
                    image[i][j]=color;
                }
            }
        }
        return image;
    }
};