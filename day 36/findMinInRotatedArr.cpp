// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]>nums[r])
                l=mid+1;
            if(nums[mid]<nums[r])
                r=mid;
        }
        return nums[l];
        
    }
};