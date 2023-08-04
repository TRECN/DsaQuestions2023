// https://leetcode.com/problems/word-break/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
//recursion(tle)
class Solution {
public:
    int word(int i,string s,set<string>&wordDict){
        if(i==s.size())return 1;
        string temp;
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(wordDict.find(temp)!=wordDict.end()){
                if(word(j+1,s,wordDict))return 1;
            }
        }
        return 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        for(auto i:wordDict)
            st.insert(i);
        return word(0,s,st);
    }
};

//top down(memoization)
class Solution {
public:
    
    int word(int i,string s,set<string>&wordDict,vector<int>&dp){
        if(i==s.size())return 1;
        string temp;

        if(dp[i]!=-1)
            return dp[i];
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(wordDict.find(temp)!=wordDict.end()){
                if(word(j+1,s,wordDict,dp))return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size()+1,-1);
        set<string>st;
        for(auto i:wordDict)
            st.insert(i);
        return word(0,s,st,dp);
    }
};

//bottom up(tabulation)
class Solution {
public:
    

    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        set<string>st;
        for(auto i:wordDict)
            st.insert(i);
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int i=1;i<=s.size();i++){
            string temp;
            for(int j=0;j<i;j++){
                temp=s.substr(j,i-j);
                if(dp[j]&&st.find(temp)!=st.end()){
                    dp[i]=i;
                    break;
                }
            }
        }
        return dp[n];
    }
};