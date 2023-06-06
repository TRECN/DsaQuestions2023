// https://leetcode.com/problems/find-the-distinct-difference-array/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        set<int>a;
        for(int i=0;i<n;i++){
            int b,b1;
            for(int j=0;j<=i;j++){
                a.insert(nums[j]);
            }
            b=a.size();
            a.clear();
            for(int k=i+1;k<n;k++){
                a.insert(nums[k]);
            }
            b1=a.size();
            ans.push_back(b-b1);
            a.clear();
        }
        return ans;
    }
};