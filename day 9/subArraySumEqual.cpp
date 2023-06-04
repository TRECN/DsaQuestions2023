// https://leetcode.com/problems/subarray-sum-equals-k/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size = nums.size();
            int sum=0, ans=0;
            unordered_map<int,int> map;
            map[0] = 1;

            for(int i=0; i<size; i++){
                sum += nums[i];
                if(map[sum-k]) 
                    ans+=map[sum-k];
                map[sum]++;
            }
            return ans;
    }
};