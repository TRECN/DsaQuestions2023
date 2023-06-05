// https://leetcode.com/problems/maximum-subarray/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax=0;
        int Max=INT_MIN;
        for(auto i:nums){
            curMax+=i;
            Max=max(curMax,Max);
            curMax=(curMax<0)?0:curMax;
        }
        return Max;
    }
};