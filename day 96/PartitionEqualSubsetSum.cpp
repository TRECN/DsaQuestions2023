// https://leetcode.com/problems/partition-equal-subset-sum/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int DP(int i,int subSum,vector<vector<int>>&dp,vector<int>&nums){
        if(subSum==0)
            return true;
        if(i>=nums.size()||subSum<0)
            return false;
        if(dp[i][subSum]!=-1)return dp[i][subSum];
        int take=DP(i+1,subSum-nums[i],dp,nums);
        int notTake=DP(i+1,subSum,dp,nums);
        return dp[i][subSum]=take||notTake;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto i:nums)
            sum+=i;
        if(sum%2==1)
            return 0;
        int n=nums.size();
        int subSum=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(subSum+1,-1));
        return DP(0,subSum,dp,nums);
    }
};