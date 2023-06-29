// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int val(vector<int>&nums,int l,int r,int target){
        while(l<=r){
            int mid=(l+r)>>1;
            if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int start=val(nums,l,r,target);
        int end=val(nums,l,r,target+1)-1;
        if(start<nums.size()&&nums[start]==target)
            return {start,end};
        return{-1,-1};
    }
};