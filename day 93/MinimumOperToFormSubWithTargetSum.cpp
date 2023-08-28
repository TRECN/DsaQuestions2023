// https://leetcode.com/problems/minimum-operations-to-form-subsequence-with-target-sum/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minOperations(vector<int>& nums, int target) {
        long long sum=accumulate(nums.begin(),nums.end(),0ll);
        int n=nums.size();
        if(sum<target)return -1;
        int operations=0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=0;i--){
            sum-=nums[i];
            while(sum<target){
                while(nums[i]>target){
                    nums[i]=nums[i]/2;
                    operations++;
                }
                target-=nums[i];
            }
        }
        return operations;
    }
};