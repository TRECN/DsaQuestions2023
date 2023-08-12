// https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75
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
    int dfs(TreeNode* root,int maxi){
        if(!root)
            return 0;
        if(root->val>=maxi){
            return 1+dfs(root->left,root->val)+dfs(root->right,root->val);
        }
        else
            return dfs(root->left,maxi)+dfs(root->right,maxi);

    }
    int goodNodes(TreeNode* root) {
        if(!root)
            return 0;
        return dfs(root,INT_MIN);
    }
};