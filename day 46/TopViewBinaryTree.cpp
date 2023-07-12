// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
struct Node
{
    int data;
    Node* left;
    Node* right;
};
class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>>Q;
        if(!root)return ans;
        Q.push({root,0});
        while(!Q.empty()){
            auto p=Q.front();
            Q.pop();
            Node* node=p.first;
            int line = p.second;
            if(mp.find(line)==mp.end())mp[line]=node->data;
            
            if(node->left)Q.push({node->left,line-1});
            if(node->right)Q.push({node->right,line+1});
            
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }

};