// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            ans=max(ans,nums[i]+nums[nums.size()-1-i]);
        }
        return ans;
    }
};