// https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<vector<int>>TapRange;
        for(int i=0;i<=n;i++){
            TapRange.push_back({i-ranges[i],i+ranges[i]});
        }
        // for(auto i:TapRange){
        //     cout<<i[0]<<", "<<i[1]<<endl;
        // }
        vector<int>dp(n+1,1e9);
        dp[0]=0;
        for(int i=0;i<=n;i++){
            for(int j=max(0,TapRange[i][0]);j<=min(n,TapRange[i][1]);j++){
                dp[j]=min(dp[j],dp[max(TapRange[i][0],0)]+1);
            }
        }
        if(dp[n]>=n+2)
            return -1;
        return dp[n];
        
    }
};