// https://leetcode.com/problems/extra-characters-in-a-string/description/?envType=daily-question&envId=2023-09-02
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        vector<int>dp(s.size()+1,INT_MAX);
        dp[0]=0;

        set<string>st(dictionary.begin(),dictionary.end());

        for(int i=1;i<=s.length();i++){
            dp[i]=dp[i-1]+1;
            for(int j=1;j<=i;j++){
                if(st.find(s.substr(i-j,j))!=st.end()){
                    dp[i]=min(dp[i],dp[i-j]);
                }
            }
        }
        return dp[s.size()];
    }

};