// https://leetcode.com/problems/sum-of-distances-in-tree/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int>ans, join;
    map<int,vector<int>>adj;
    void dfs(int i, int p){
        for(auto node: adj[i]){
            if(p!=node){
                dfs(node, i);
                join[i]+=join[node];
                ans[i]+=ans[node]+join[node];
            }
        }
    }
    void dfs1(int i, int p){
        for(auto node: adj[i]){
            if(p!=node){
                ans[node]+=ans[i]+join[0]-join[node]-ans[node]-join[node];
                dfs1(node, i);
            }
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        ans.resize(n, 0);
        join.resize(n, 1);
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        dfs(0, -1);
        dfs1(0, -1);
        return ans;
    }
};