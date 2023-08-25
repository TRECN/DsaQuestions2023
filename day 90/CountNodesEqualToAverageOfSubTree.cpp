// https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/description/
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
    int count=0;
    int SubtreeSum(TreeNode* root,int &Ncount){
        if(!root)
            return 0;
        Ncount++;
        int left=SubtreeSum(root->left,Ncount);
        int right=SubtreeSum(root->right,Ncount);
        return left+right+root->val;
    }
    void dfs(TreeNode* root){
        if(!root)
            return;
        int Ncount=0;
        int avg=SubtreeSum(root,Ncount)/Ncount;
        if(avg==root->val)
            count++;
        dfs(root->left);
        dfs(root->right);

    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return count;
    }
};