// https://leetcode.com/problems/path-sum-iii/description/?envType=study-plan-v2&envId=leetcode-75
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
    int paths=0;
    void DFS(TreeNode* root,long long targetSum){
        if(!root)
            return;
        if(root->val==targetSum)
            paths++;
        DFS(root->left,targetSum-root->val);
        DFS(root->right,targetSum-root->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)
            return 0;
        
        DFS(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return paths;
    }
};