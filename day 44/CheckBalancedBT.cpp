// https://leetcode.com/problems/balanced-binary-tree/description/
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
    int bal(TreeNode* root){
        if(root==NULL)
            return 0;
        int l=bal(root->left);
        if(l==-1)return -1;
        int r=bal(root->right);
        if(r==-1)return -1;
        if(abs(l-r)>1)
            return -1;
        
        return max(l,r)+1;

    }
    bool isBalanced(TreeNode* root) {
        return bal(root)!=-1 ;
    }
};