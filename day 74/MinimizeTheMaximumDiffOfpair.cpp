//https://leetcode.com/problems/minimize-the-maximum-difference-of-pairs/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums[nums.size()-1]-nums[0];
        int ans=r;
        while(l<=r){
            int mid=l+(r-l)/2; 
            int count=0;
            for(int i=1;i<nums.size();i++){
                if(nums[i]-nums[i-1]<=mid){
                    count++;
                    i++;
                }
            }
            if(count>=p){
                ans=min(ans,mid);
                r=mid-1;
            }
            else
                l=mid+1;
            
        }
        return ans;
    }
};