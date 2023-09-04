// https://leetcode.com/problems/count-of-interesting-subarrays/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int mod, int k) {
        int n = nums.size();
        vector<int> sum(n + 1, 0);
        unordered_map<int, int> cnt;

        sum[0] = 0;
        cnt[0] = 1;
        long long result = 0;

        for (int i = 0; i < n; i++) {
            sum[i + 1] = (sum[i] + (nums[i] % mod == k)) % mod;
            int comp = (sum[i + 1] - k + mod) % mod;
            result += cnt[comp];
            cnt[sum[i + 1]]++;
        }

        return result;
    }
};