// https://leetcode.com/problems/minimum-absolute-difference-in-bst/
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
    vector<int>values;
public:
    void trav(TreeNode *root){
        if(root==NULL)
            return;
        
        trav(root->left);
        values.push_back(root->val);
        trav(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        trav(root);

        int Min=INT_MAX;

        for(int i=1;i<values.size();i++){
            Min=min(Min,values[i]-values[i-1]);
        }
        return Min;
    }
};