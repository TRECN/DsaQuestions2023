// https://leetcode.com/problems/leaf-similar-trees/description/?envType=study-plan-v2&envId=leetcode-75
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
    void DFS(TreeNode* root, vector<int>& leafNodes) {
    if (root == NULL) {
        return;
    }

    if (root->left == NULL && root->right == NULL) {
        leafNodes.push_back(root->val);
        return;
    }

    DFS(root->left, leafNodes);
    DFS(root->right, leafNodes);
}

    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int> v1,v2;
        DFS(root1,v1);
        DFS(root2,v2);
        
        return v1==v2;
    }
};