// https://leetcode.com/problems/maximum-binary-tree/description/
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
    int maxi(vector<int>& nums,int l,int r){
        int m=l;
        for(int i=l;i<r;i++){
            if(nums[m]<nums[i])
                m=i;
        }
        return m;
    }
    TreeNode* DFS(vector<int>& nums,int l,int r){
        if(l==r)
            return NULL;
        int m=maxi(nums,l,r);
        TreeNode* node=new TreeNode(nums[m]);
        node->left=DFS(nums,l,m);
        node->right=DFS(nums,m+1,r);
        return node;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return DFS(nums,0,nums.size());
        
    }
};