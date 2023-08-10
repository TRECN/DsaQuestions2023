// https://leetcode.com/problems/count-complete-subarrays-in-an-array/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>mp;
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
                if(s.size()==mp.size())
                    ans++;
            }
        }
        return ans;
    }
};