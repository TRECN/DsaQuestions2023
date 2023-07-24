// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/
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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        if(root->val < p->val and root->val < q->val) return lowestCommonAncestor(root->right,p,q);
        if(root->val > p->val and root->val > q->val) return lowestCommonAncestor(root->left,p,q);
        return root;
    }
};