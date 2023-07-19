// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/
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
    map<int,int>inMap;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int j=0;
        for(auto i:inorder){
            inMap[i]=j++;
        }
        TreeNode* root = buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);

        return root;
    }
    TreeNode* buildTree(vector<int>&preorder,int preStart,int preEnd, vector<int>&inorder,int inStart,int inEnd){
        if(preStart>preEnd||inStart>inEnd)return NULL;

        TreeNode* root = new TreeNode(preorder[preStart]);

        int inRoot=inMap[root->val];
        int numLeft=inRoot-inStart;

        root->left = buildTree(preorder,preStart+1,preStart+numLeft,inorder,inStart,inRoot-1);
        root->right= buildTree(preorder,preStart+numLeft+1,preEnd,inorder,inRoot+1,inEnd);

        return root;
    }
};