// https://leetcode.com/problems/check-if-there-is-a-valid-partition-for-the-array/description/
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
    bool DP(int i,vector<int>& nums){
        if(i<0)return 1;
        if(i==0)return 0;
            bool a=0,b=0,c=0;
        if(dp[i]!=-1)return dp[i];
        if(i>0&&nums[i]==nums[i-1])
            a=DP(i-2,nums);
        if(i>1&&nums[i]==nums[i-1]&&nums[i-1]==nums[i-2])
            b=DP(i-3,nums);
        if(i>1&&nums[i]==nums[i-1]+1&&nums[i-1]==nums[i-2]+1)
            c=DP(i-3,nums);
        return dp[i]=a||b||c;
    }
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n,-1);
        return DP(n-1,nums);
    }
};