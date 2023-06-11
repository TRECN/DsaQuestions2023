https://leetcode.com/contest/weekly-contest-349/problems/neither-minimum-nor-maximum/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        vector<int>a;
        for(auto i:s){
            a.push_back(i);
        }
        if(a.size()<=2)
            return -1;
        return a[1];
    }
};