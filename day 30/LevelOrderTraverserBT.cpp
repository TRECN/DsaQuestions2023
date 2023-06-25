// https://leetcode.com/problems/binary-tree-level-order-traversal/description/
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
    vector<vector <int>>result;
    void level(TreeNode* root,int lev){
        if(root==NULL)
            return;
        if(lev==result.size())result.push_back({});
        result[lev].push_back(root->val);
        level(root->left,lev+1);
        level(root->right,lev+1);

        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root!=NULL)
            level(root,0);
        return result;
    }
};