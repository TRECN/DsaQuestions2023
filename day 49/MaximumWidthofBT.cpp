// https://leetcode.com/problems/maximum-width-of-binary-tree/description/
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

 #define ll long long
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int ans=0;
        queue<pair<TreeNode*,ll>>Q;
        Q.push({root,0});
        while(!Q.empty()){
            int size=Q.size();
            int first, last;
            int idmin=Q.front().second;
            for(int i=0;i<size;i++){
                ll cur_id=Q.front().second-idmin;
                TreeNode* node=Q.front().first;
                Q.pop();
                if(i==0)
                    first=cur_id;
                if(i==size-1)
                    last=cur_id;
                if(node->left)
                    Q.push({node->left,cur_id*2+1});
                if(node->right)
                    Q.push({node->right,cur_id*2+2});
                



            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};