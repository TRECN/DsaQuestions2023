// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a(nums.size());
        int k=1,j=0;
        for(auto i:nums){
            if(i>0){
                a[j]=i;
                j+=2;

            }
            else{
                a[k]=i;
                k+=2;
            }
        }
        return a;
        
    }
};