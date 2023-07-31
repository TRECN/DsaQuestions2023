// https://leetcode.com/problems/max-consecutive-ones-iii/description/?envType=study-plan-v2&envId=leetcode-75??
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int countZ=0;
        int ans=0;
        while(r<n){
            if(!nums[r])
                countZ++;
            while(countZ>k){
                if(!nums[l])
                    countZ--;
                l++;
            }
            ans=max(r-l+1,ans);
            r++;
        }
        return ans;
    }
};