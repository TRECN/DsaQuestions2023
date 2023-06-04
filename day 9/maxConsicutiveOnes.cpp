// https://leetcode.com/problems/max-consecutive-ones/description/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curMax=0;
        int Max=0;
        int l=0;
        int r=0;
        while(r<nums.size()){
            if(nums[r]==1){
                r++;
                curMax=r-l;
            }
            else{
                r++;
                l=r;
                Max=max(Max,curMax);
                curMax=0;
            }
        }
        return max(curMax,Max);
    }
};