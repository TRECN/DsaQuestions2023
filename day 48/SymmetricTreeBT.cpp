// https://leetcode.com/problems/symmetric-tree/description/
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
    bool isSym(TreeNode* root1,TreeNode* root2){
        if(!root1||!root2)
            return root1==root2;
        return (root1->val==root2->val)&&isSym(root1->left,root2->right)&&isSym(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return isSym(root->left,root->right);
    }
};