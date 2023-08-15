// https://leetcode.com/problems/longest-alternating-subarray/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int flag=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]-nums[j-1]==flag)
                    ans=max(ans,j-i+1);
                else
                    break;
                flag=(flag==1)?-1:1;
            }
        }
        return ans?ans:-1;
    }
};