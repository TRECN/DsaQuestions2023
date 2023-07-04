// https://leetcode.com/problems/single-number-ii/

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
        int ans;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second<3){
                ans= i.first;
                break;
            }
        }
        return ans;
    }
};