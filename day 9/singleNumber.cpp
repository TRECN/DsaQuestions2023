// https://leetcode.com/problems/single-number/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int ans=0;
        for(auto i:m){
            if(i.second==1)
                ans=i.first;
        }
        return ans;
    }
};