// https://leetcode.com/problems/unique-binary-search-trees-ii/description/
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
    vector<TreeNode*> Trees(int start,int end){
        if(start>end){
            return {NULL};
        }
        if(start==end){
            return {new TreeNode(start)};
        }
        vector<TreeNode*>ans;

        for(int i=start;i<=end;i++){
            vector<TreeNode*> left=Trees(start,i-1);
            vector<TreeNode*> right=Trees(i+1,end);
            
            for(TreeNode* l:left){
                for(TreeNode* r:right){
                    TreeNode* root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return Trees(1,n);
        
    }
};