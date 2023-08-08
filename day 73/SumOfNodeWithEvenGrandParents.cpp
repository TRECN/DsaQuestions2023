// https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/description/
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
    int ans=0;
    void sum(TreeNode* node){
        if(!node)return;
        if(node->left)ans+=node->left->val;
        if(node->right)ans+=node->right->val;
    }
    int sumEvenGrandparent(TreeNode* root) {
        if(!root)return 0;
        if(root->val%2==0){
            sum(root->left);
            sum(root->right);
        }
        sumEvenGrandparent(root->left);
        sumEvenGrandparent(root->right);
        return ans;
    }
};