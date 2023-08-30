// https://leetcode.com/problems/minimum-replacements-to-sort-the-array/submissions/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long operations=0;
        int n=nums.size();
        int prev=nums[n-1];
        for(int i=n-2;i>=0;i--){
            int q=nums[i]/prev;
            int r=nums[i]%prev;
            if(q==0){
                prev=r;
            }
            else if(r==0){
                operations+=q-1;
            }
            else{
                operations+=q;
                prev-=(prev-r+q)/(q+1);
            }
        }
        return operations;
    }
};