// https://leetcode.com/problems/palindromic-substrings/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>>dp;
    int DP(string s, int i, int j){
        if(i>=j)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j] = (s[i]==s[j])? DP(s,i+1,j-1):0; 
    }
    int countSubstrings(string s) {
        int ans=0;
        dp.resize(s.size(),vector<int>(s.size(),-1));
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                ans+=DP(s,i,j);
            }
        }
        return ans;
    }


};