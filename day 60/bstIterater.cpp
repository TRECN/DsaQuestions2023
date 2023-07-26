// https://leetcode.com/problems/binary-search-tree-iterator/
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

class BSTIterator {
public:
    vector<int>tree;
    int i=0;
    void in(TreeNode* root){
        if(!root) return;
        in(root->left);
        tree.push_back(root->val);
        in(root->right);
    }
    BSTIterator(TreeNode* root) {
        in(root);
    }
    
    int next() {
        return tree[i++];
    }
    
    bool hasNext() {
        return i<tree.size();
    }
};