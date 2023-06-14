// https://leetcode.com/problems/minimum-absolute-difference-in-bst/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

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