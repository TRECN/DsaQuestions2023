// https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
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



class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int>ans;
        map<int,int>mp;
        queue<pair<int,Node*>>Q;
        if(!root)return ans;
        Q.push({0,root});
        while(!Q.empty()){
            auto p=Q.front();
            Q.pop();
            Node* node=p.second;
            int line=p.first;
            mp[line]=node->data;
            if(node->left)Q.push({line-1,node->left});
            if(node->right)Q.push({line+1,node->right});
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};

