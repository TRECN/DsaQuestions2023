// https://leetcode.com/problems/max-area-of-island/description/
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visi(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        int maxi=0;
        int h[4]={0,0,-1,1};
        int v[4]={-1,1,0,0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!grid[i][j]||visi[i][j])continue;
                visi[i][j]=1;
                q.push({i,j});
                int count=0;
                while(!q.empty()){
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                    count++;
                    for(int k=0;k<4;k++){
                        int Nx=x+h[k];
                        int Ny=y+v[k];
                        if(Nx>=0&&Nx<n&&Ny>=0&&Ny<m&&!visi[Nx][Ny]&&grid[Nx][Ny]){
                            visi[Nx][Ny]=1;
                            q.push({Nx,Ny});
                        }
                    }
                }
                maxi=max(count,maxi);
            }
        }
        return maxi;

    }
};