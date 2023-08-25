// https://leetcode.com/problems/interleaving-string/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int n,m,o;
    string a,b,c;
    vector<vector<int>>dp;
    bool recursion(int i,int j,int k){
        if(i>=n&&j>=m&&k>=o)
            return true;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i<n&&a[i]==c[k]&&j<m&&b[j]==c[k])
            return dp[i][j]=(recursion(i+1,j,k+1)||recursion(i,j+1,k+1));
        else if(i<n&&a[i]==c[k])
            return dp[i][j]=recursion(i+1,j,k+1);
        else if(j<m&&b[j]==c[k])
            return dp[i][j]=recursion(i,j+1,k+1);
        else return dp[i][j]=false;

    }
    bool isInterleave(string s1, string s2, string s3) {
        n=s1.size();
        m=s2.size();
        o=s3.size();
        a=s1,b=s2,c=s3;
        dp.resize(n+1,vector<int>(m+1,-1));
        if(n+m!=o)return false;
        return recursion(0,0,0);
    }
};