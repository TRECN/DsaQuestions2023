// https://leetcode.com/problems/word-search-ii/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

class Solution {
public:
    vector<string>ans;
    int n,m;
    vector<int>x={0,0,1,-1};
    vector<int>y={1,-1,0,0};
    void dfs(int i,int j,string &temp,vector<vector<char>>& board,unordered_set<string>&s){
        if(i<0||j<0||i>=n||j>=m||temp.size()>=10)
            return;
        if(board[i][j]=='*')
            return;
        temp.push_back(board[i][j]);
        if(s.find(temp)!=s.end()){
            s.erase(temp);
            ans.push_back(temp);
        }
        temp.pop_back();
        char ch=board[i][j];
        for(int k=0;k<4;k++){
            temp.push_back(board[i][j]);
            board[i][j]='*';
            dfs(i+x[k],j+y[k],temp,board,s);
            temp.pop_back();
            board[i][j]=ch;
        }
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        n=board.size();
        m=board[0].size();
        if(n==0||m==0)
            return ans;
        unordered_set<string>s;
        for(auto i:words)
            s.insert(i);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                string temp="";
                dfs(i,j,temp,board,s);
            }
        }
        return ans;
    }
};