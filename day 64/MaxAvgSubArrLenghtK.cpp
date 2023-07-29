// https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0;
        double sw=0;
        for(int i=0;i<k;i++){
            sw+=nums[i];
        }
        ans=sw/k;
        for(int i=k;i<nums.size();i++){
            sw+=nums[i]-nums[i-k];
            ans=max(ans,sw/k);
        }
        return ans;
    }
};