// https://leetcode.com/problems/find-eventual-safe-states/description//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>outdegree(n,0);
        vector<vector<int>>indegree(n);
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(auto j:graph[i]){
                indegree[j].push_back(i);
                outdegree[i]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(graph[i].size()==0)
                q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto i:indegree[node]){
                outdegree[i]--;
                if(outdegree[i]==0)
                    q.push(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};