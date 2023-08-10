// https://leetcode.com/problems/jump-game-ii/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int>dp;
    int DP(int i,vector<int>&nums){
        if(i>=nums.size()-1)return 0;
        if(dp[i]!=-1)return dp[i];
        int ans=nums.size()-1;
        for(int k=1;k<=nums[i];k++){
            int res=1+DP(i+k,nums);
            ans=min(ans,res);
        }
        return dp[i]=ans;
    }
    int jump(vector<int>& nums) {
        dp.resize(10001,-1);
        int n=nums.size();
        return DP(0,nums);
    }
};