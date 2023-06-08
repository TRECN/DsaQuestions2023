// https://leetcode.com/problems/longest-consecutive-sequence/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}as
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        vector<int>a;
        for(auto i:s){
            a.push_back(i);
        }
        int l=0;
        int r=0;
        int currMax=1;
        int Max=1;
       while(r<a.size()-1){
            if(a[r]+1==a[r+1]){
                r++;
                currMax+=1;
            }
            else{
                Max=max(Max,currMax);
                r++;
                currMax=1;
            }
       }
       return max(Max,currMax);
    }
};
