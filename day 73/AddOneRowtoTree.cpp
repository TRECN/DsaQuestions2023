// https://leetcode.com/problems/add-one-row-to-tree/description/
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
    TreeNode* dfs(TreeNode* root, int val, int depth,int level){
        
        if(depth==1){
            TreeNode* node = new TreeNode(val,root,NULL);
            return node;
        }
        if(level==depth-1){
            TreeNode* Lnode=new TreeNode(val,root->left,NULL);
            TreeNode* Rnode=new TreeNode(val,NULL,root->right);
            root->left=Lnode;
            root->right=Rnode;

        }
        if(root->left)dfs(root->left,val,depth,level+1);
        if(root->right)dfs(root->right,val,depth,level+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(!root)return root;
        return dfs(root,val,depth,1);
        
    }
};