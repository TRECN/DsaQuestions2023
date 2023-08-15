// https://leetcode.com/problems/surrounded-regions/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>>visi;
    void dfs(int i,int j,vector<vector<char>>& board){
        int n=board.size();
        int m=board[0].size();
        if(i>=n||j>=m)
            return;
        visi[i][j]=1;
        if(i<n-1&&!visi[i+1][j]&&board[i+1][j]!='X')
            dfs(i+1,j,board);
        if(j<m-1&&!visi[i][j+1]&&board[i][j+1]!='X')
            dfs(i,j+1,board);
        if(i>0&&!visi[i-1][j]&&board[i-1][j]!='X')
            dfs(i-1,j,board);
        if(j>0&&!visi[i][j-1]&&board[i][j-1]!='X')
            dfs(i,j-1,board);
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();

        visi.resize(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(!visi[i][0]&&board[i][0]=='O')
                dfs(i,0,board);
            if(!visi[i][m-1]&&board[i][m-1]=='O')
                dfs(i,m-1,board);
        }
        for(int j=0;j<m;j++){
            if(!visi[0][j]&&board[0][j]=='O')
                dfs(0,j,board);
            if(!visi[n-1][j]&&board[n-1][j]=='O')
                dfs(n-1,j,board);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visi[i][j]&&board[i][j]=='O')
                    board[i][j]='X';
            }
        }
    }
};