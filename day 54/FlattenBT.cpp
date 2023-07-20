// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/
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
    queue<TreeNode*>q;
    void preorder(TreeNode* root){
        if(root==NULL)return;
        q.push(root);
        preorder(root->left);
        preorder(root->right);
    }
    void flatten(TreeNode* root) {
        if(!root)return;
        preorder(root);
        root=q.front();
        q.pop();
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()&&!q.empty()){
            TreeNode* node=Q.front();
            Q.pop();
            node->left=NULL;
            node->right=q.front();
            Q.push(q.front());
            q.pop();
            
        }

    }
};