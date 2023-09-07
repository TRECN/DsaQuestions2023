// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        for(auto i:nums){
            if(m[i]<2)
                m[i]++;
        }
        int ans=0;
        for(auto i:m)
            ans+=i.second;
        nums.clear();
        for(auto i:m){
            for(int j=0;j<i.second;j++){
                nums.push_back(i.first);
            }
        }
        return ans;

    }
};