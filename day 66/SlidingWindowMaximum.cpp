// https://leetcode.com/problems/sliding-window-maximum/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int size=nums.size();
        multiset<int>ms;
        for(int i=0;i<k;i++)
            ms.insert(nums[i]);
        ans.push_back(*--ms.end());    
        for(int i=k;i<size;i++){
            ms.insert(nums[i]);
            ms.erase(ms.find(nums[i-k]));
            ans.push_back(*--ms.end());
        }
        return ans;
    }
};