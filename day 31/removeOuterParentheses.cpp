// https://leetcode.com/problems/remove-outermost-parentheses/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        stack<char>st;
        for(int i=0;i<s.size();i++){
        if(s[i] == '('){
            if(st.size()>0)
            ans+='(';
             st.push('(');
        }

        if(s[i] == ')'){
                if(st.size() > 1){
                    ans+=')';
                }
            st.pop();


            }
        }
        return ans;
    }
};