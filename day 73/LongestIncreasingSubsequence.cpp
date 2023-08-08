// https://leetcode.com/problems/longest-increasing-subsequence/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}


class Solution {
public:
    int recursion(vector<int>& nums,int i,int prev,vector<int>& dp){
        if(i>=nums.size())return 0;
        int yes=0;
        if(dp[prev+1]!=-1)return dp[i];
        int no=recursion(nums,i+1,prev,dp);
        if(prev==-1||nums[i]>nums[prev])yes=1+recursion(nums,i+1,i,dp);
        return dp[prev+1]=max(yes,no);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return recursion(nums,0,-1,dp);
    }
};