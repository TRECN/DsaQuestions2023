// https://leetcode.com/problems/3sum-closest/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        long long int ans=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum=nums[left]+nums[right]+nums[i];
                if(sum==target)
                    return target;
                else{
                    if(sum<target)
                        left++;
                    else
                        right--;
                }
                if(abs(ans-target)>abs(sum-target)){
                    ans=sum;
                }
            }
        }
        return ans;
    }
};