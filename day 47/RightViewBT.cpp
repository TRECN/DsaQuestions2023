// https://leetcode.com/problems/binary-tree-right-side-view/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        map<int,int>mp;
        queue<pair<int,TreeNode*>>Q;
        if(!root)return ans;
        Q.push({0,root});
        while(!Q.empty()){
            auto p=Q.front();
            Q.pop();
            int level=p.first;
            TreeNode* node=p.second;
            mp[level]=node->val;
            if(node->left)
                Q.push({level+1,node->left});
            if(node->right)
                Q.push({level+1,node->right});
        }
        for(auto i:mp)
            ans.push_back(i.second);
        return ans;
    }
};