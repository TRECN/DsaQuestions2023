// https://leetcode.com/problems/two-sum/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sum;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                sum.push_back(i);
                sum.push_back(m[target-nums[i]]);
                return sum;
            }
            m[nums[i]]=i;
        }
        return sum;
    }
};