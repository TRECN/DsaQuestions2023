// https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
    vector<int> dp(n, -1);
    dp[0]=0;

    for (int i = 1; i < n; ++i) {
        for (int j = i - 1; j >= 0 ; --j) {
            if (abs(nums[i] - nums[j]) <= target&&dp[j]!=-1) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
    }

    return dp[n - 1];
    }
};