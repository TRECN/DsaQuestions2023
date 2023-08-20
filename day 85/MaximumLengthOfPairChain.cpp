// https://leetcode.com/problems/maximum-length-of-pair-chain/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int chain=0;
        int n=pairs.size();
        vector<int>dp(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if((pairs[i][0]>pairs[j][1])&&(dp[i]<1+dp[j]))
                    dp[i]=dp[j]+1;
            }
            chain=max(chain,dp[i]);
        }
        return chain+1;
    }
};