// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/submissions/
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
    void preorder(TreeNode* root,set<int>&s){
        if(!root)
            return;
        s.insert(root->val);
        preorder(root->left,s);
        preorder(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        preorder(root,s);
        set<int>::iterator i=s.begin();
        if(s.size()>1)return *++i;
        return -1;
        
    }
};