// https://leetcode.com/problems/single-number/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
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