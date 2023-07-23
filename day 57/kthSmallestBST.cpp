// https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
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
  void findInorder(TreeNode *root,vector<int>&v)
  {
    if(root==NULL)
        return;
    findInorder(root->left,v);
    v.push_back(root->val);
    findInorder(root->right,v);
 }
public:
 int kthSmallest(TreeNode* root, int k) {
    vector<int>v;
    findInorder(root,v);
    return v[k-1];
 }
 };