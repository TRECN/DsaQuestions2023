// https://leetcode.com/problems/permutations-ii/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:

    void nextPermutation(vector<int>&nums){
        int n=nums.size();
        int brek=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                brek=i;
                break;
            }
        }
        if(brek==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>brek;i--){
            if(nums[i]>nums[brek]){
                swap(nums[i],nums[brek]);
                break;
            }
        }
        reverse(nums.begin()+brek+1,nums.end());
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<vector<int>,int>m;
        int n=nums.size();
        int f=1;
        for(int i=1;i<=n;i++)
            f*=i;
        while(f--){
            m[nums]++;
            nextPermutation(nums);
        }
        vector<vector<int>>ans;
        for(auto i:m){
            ans.push_back(i.first);
        }
        return ans;
    }
};