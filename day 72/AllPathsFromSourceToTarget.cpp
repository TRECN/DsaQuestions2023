// https://leetcode.com/problems/all-paths-from-source-to-target/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<vector<int>>& graph,vector<int>&temp,int start,int end){
        temp.push_back(start);
        if(start==end){
            ans.push_back(temp);
            return;
        }
        for(auto i:graph[start]){
            dfs(graph,temp,i,end);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>temp;
        if(graph.size()==0)
            return ans;
        dfs(graph,temp,0,graph.size()-1);
        return ans;
    }
};