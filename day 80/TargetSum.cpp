// https://leetcode.com/problems/target-sum/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int recursion(vector<int>&nums, int target, int start){
        if(start==nums.size()&&target==0)
            return 1;
        if(start==nums.size()&&target!=0)
            return 0;
        int add=recursion(nums,target-nums[start],start+1);
        int sub=recursion(nums,target+nums[start],start+1);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return recursion(nums,target,0);
    }
};