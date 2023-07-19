// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/
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

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int j=0;
        for(auto i:inorder)
            inMap[i]=j++;

        TreeNode* root=buildTree(inorder,0,inorder.size()-1,postorder,postorder.size()-1,0);
        return root;    
    }
    TreeNode* buildTree(vector<int>&inorder, int inStart, int inEnd,vector<int>&postorder,int postStart,int postEnd){
        if(inStart>inEnd||postStart<postEnd)return NULL;

        TreeNode* root=new TreeNode(postorder[postStart]);

        int inRoot=inMap[root->val];
        int numRight=inEnd-inRoot;

        root->left=buildTree(inorder,inStart,inRoot-1,postorder,postStart-numRight-1,postEnd);
        root->right=buildTree(inorder,inRoot+1,inEnd,postorder,postStart-1,postStart-numRight);

        return root;
    }
};