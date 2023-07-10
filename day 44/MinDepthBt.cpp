// https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
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
    int dfsHeight(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        if (!root->left) {
            return 1 + dfsHeight(root->right);
        } else if (!root->right) {
            return 1 + dfsHeight(root->left);
        }
                int l=dfsHeight(root->left);
        int r=dfsHeight(root->right);
        return 1+min(l,r);
    }
    int minDepth(TreeNode* root) {
        return dfsHeight(root);
    }
};