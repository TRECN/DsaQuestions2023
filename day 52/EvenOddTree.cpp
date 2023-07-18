// https://leetcode.com/problems/even-odd-tree/description/
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
    bool isEvenOddTree(TreeNode* root) {
        int level=0;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
            int size=Q.size();
            if(level%2==0){//even level
                int Max=INT_MIN;
                for(int i=0;i<size;i++){
                    TreeNode* node=Q.front();
                    Q.pop();
                    if(node->val%2==0||node->val<=Max)
                        return false;
                    Max=node->val;
                    if(node->left)Q.push(node->left);
                    if(node->right)Q.push(node->right);
                }
            }
            else{//odd level
                int Min=INT_MAX;
                for(int i=0;i<size;i++){
                    TreeNode* node=Q.front();
                    Q.pop();
                    if(node->val%2==1||node->val>=Min)
                        return false;
                    Min=node->val;
                    if(node->left)Q.push(node->left);
                    if(node->right)Q.push(node->right);
                }
            }
            level++;
        }
        return true;
    }
};