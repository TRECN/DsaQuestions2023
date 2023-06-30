// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/983140521/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid=0;
        while(l<h){
            mid=(l+h)/2;
            if(nums[mid]>nums[h])l+=1;
            else h-=1;
        }
        int r=l,a;
        l=0;
        h=nums.size()-1;
        while(l<=h){
            mid=(l+h)/2;
            a=(mid+r)%nums.size();
            if(nums[a]==target)return a;
            else if(nums[a]<target)l+=1;
            else h-=1;
        }
        return -1;
    }
};