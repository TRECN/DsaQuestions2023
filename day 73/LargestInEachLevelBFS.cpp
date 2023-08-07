// https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/
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
    vector<int> largestValues(TreeNode* root) {
        
        vector<int>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            priority_queue<int>temp;
            for(int i=0;i<s;i++){
                TreeNode* node=q.front();
                q.pop();
                temp.push(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            ans.push_back(temp.top());
        }
        return ans;
    }
};