// https://leetcode.com/problems/palindrome-partitioning/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<string>>ans;
    bool check(string s){
        string temp=s;

        reverse(temp.begin(),temp.end());
        return temp==s;
    }
    void backtrack(string s,int start,vector<string>&temp){
        if(start==s.size()){
            ans.push_back(temp);
            return;

        }
        string str="";
        for(int i=start;i<s.size();i++){
            str+=s[i];
            if(check(str)){
                temp.push_back(str);
                backtrack(s,i+1,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        backtrack(s,0,temp);
        return ans;
    }
};