// https://leetcode.com/problems/delete-node-in-a-bst/

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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return NULL;
        if(root->val==key)
            return replacing(root);
        
        TreeNode* temp=root;
        while(temp){
            if(temp->val>key){
                if(temp->left&&temp->left->val==key){
                    temp->left=replacing(temp->left);
                    break;
                }
                else
                    temp=temp->left;
            }
            else{
                if(temp->right&&temp->right->val==key){
                    temp->right=replacing(temp->right);
                    break;
                }
                else
                    temp=temp->right;
            }
        }
        return root;
    }

    TreeNode* replacing(TreeNode* temp){
        if(!temp->left)
            return temp->right;
        else if(!temp->right)
            return temp->left;
        
        TreeNode* rightChild=temp->right;
        TreeNode* lastRight=LastRight(temp->left);
        lastRight->right=rightChild;
        return temp->left;
    }

    TreeNode* LastRight(TreeNode* temp){
        if(!temp->right)
            return temp;
        return LastRight(temp->right);
    }
};