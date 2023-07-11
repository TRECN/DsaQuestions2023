// https://leetcode.com/problems/binary-tree-maximum-path-sum/description/
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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPathDown(root,maxi);
        return maxi;
    }
    int maxPathDown(TreeNode *root,int &maxi){
        if(!root)return 0;
        int l=maxPathDown(root->left,maxi);
        int r=maxPathDown(root->right,maxi);
        int currMax=max(root->val,max(l+root->val,r+root->val));
        maxi=max(currMax,max(l+r+root->val,maxi));
        return currMax;

    }
};