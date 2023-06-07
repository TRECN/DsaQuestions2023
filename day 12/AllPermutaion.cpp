// https://leetcode.com/problems/permutations/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
void nextPermutation(vector<int>& nums) {
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
        reverse(nums.begin()+brek +1,nums.end());
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        int f=1;
        for(int i=1;i<=n;i++){
            f*=i;
        }
        while(f--){
            ans.push_back(nums);
            nextPermutation(nums);
        }
        return ans;
    }
};