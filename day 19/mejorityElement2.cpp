// https://leetcode.com/problems/majority-element-ii/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>a;
        vector<int>ans;
        int n=nums.size();
        for(auto i:nums){
            a[i]++;
        }
        for(auto i:a){
            if(i.second>(n/3))
                ans.push_back(i.first);
        }
        return ans;
    }
};