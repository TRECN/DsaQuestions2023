// https://leetcode.com/problems/letter-case-permutation/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<string>ans;
    void backtrack(string &s,int i){
        if(i==s.size()){
            ans.push_back(s);
            return;
        }
        char c=s[i];
        if(!isdigit(c))
        backtrack(s,i+1);
        s[i]=islower(c)?toupper(c):tolower(c);
        backtrack(s,i+1);
        
    }
    vector<string> letterCasePermutation(string s) {
        backtrack(s,0);
        return ans;
    }
};