// https://leetcode.com/problems/combination-sum-iii/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(int start,int n,int k,vector<int>&temp){
        if(n==0&&temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(n<0)
            return;

        for(int i=start;i<=9;i++){
            temp.push_back(i);
            backtrack(i+1,n-i,k,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        backtrack(1,n,k,temp);
        return ans;
    }
};