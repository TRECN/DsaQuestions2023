// https://leetcode.com/problems/combination-sum-iv/description/
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
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        dp.resize(target+1,0);
        dp[0]=1;

        for(int i=1;i<=target;i++){
            long long int temp=0;
            for(auto j:nums){   
                if(i>=j)temp+=dp[i-j];
            }
            dp[i]=temp;
        }
        return dp[target];
    }
};