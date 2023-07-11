// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(!root)return result;

        queue<TreeNode*>Queue;
        Queue.push(root);
        bool flag=1;

        while(!Queue.empty()){
            int Size=Queue.size();
            vector<int>level(Size);

            for(int i=0;i<Size;i++){
                TreeNode* node=Queue.front();
                Queue.pop();

                int index=(flag)?i:(Size-1-i);

                level[index]=node->val;

                if(node->left)
                    Queue.push(node->left);
                if(node->right)
                    Queue.push(node->right);


            }
            flag=!flag;
            result.push_back(level);
        }
        return result;
    }
};