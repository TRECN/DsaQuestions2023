// https://leetcode.com/problems/diameter-of-binary-tree/description/
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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0; 
        dfsHeight(root,diameter);
        return diameter;

    }
    int dfsHeight(TreeNode* root, int &diameter){
        if(root==NULL)
            return 0;
        
        int l=dfsHeight(root->left,diameter);
        int r=dfsHeight(root->right,diameter);
        diameter=max(diameter,(l+r));

        return 1+ max(l,r);
    }

};