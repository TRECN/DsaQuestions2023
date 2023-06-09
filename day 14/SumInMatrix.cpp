// https://leetcode.com/problems/sum-in-a-matrix/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for(auto &i:nums){
            sort(i.begin(),i.end());
        }
        int ans=0;
        for(int i=0;i<nums[0].size();i++){
            int t=0;
            for(int j=0;j<nums.size();j++){
                t=max(t,nums[j][i]);
            }
            ans+=t;
        }
        return ans;
    }
};