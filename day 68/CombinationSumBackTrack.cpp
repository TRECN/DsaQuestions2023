// https://leetcode.com/problems/combination-sum/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        backtrack(0,candidates,temp,ans,target);
        return ans;

    }
    void backtrack(int start,vector<int>& candidates,vector<int>&temp,vector<vector<int>>&ans,int target){
        if(target==0)
            ans.push_back(temp);
        if(target<0)
            return;
        for(int i=start;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            backtrack(i,candidates,temp,ans,target-candidates[i]);
            temp.pop_back();
        }
    }

};