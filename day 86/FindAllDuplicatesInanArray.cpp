// https://leetcode.com/problems/find-all-duplicates-in-an-array/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums)
            m[i]++;     
        vector<int>ans;
        for(auto i:m){
            if(i.second==2)
                ans.push_back(i.first);
        }       
        return ans;
    }
};