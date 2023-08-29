// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int rev(int n){
        int ans=0;
        while(n>0){
            int r=n%10;
            ans=ans*10+r;
            n/=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        for(auto i:nums){
            if(s.find(rev(i))==s.end())
                s.insert(rev(i));
        }
        return s.size();
    }
};