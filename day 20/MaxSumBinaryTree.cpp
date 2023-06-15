// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/
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
    int maxLevelSum(TreeNode* root) {
        int ans=-1;
        int l=0;
        int Max=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            l++;
            int n=q.size();
            int curMax=0;
            for(int i=0;i<n;i++){
                TreeNode *temp=q.front();
                q.pop();

                curMax+=temp->val;
                if(temp->left)
                    q.push(temp->left);

                if(temp->right)
                    q.push(temp->right);
            }
            if(curMax>Max){
                ans=l;
                Max=curMax;
            }
        }
        return ans;
    }
};