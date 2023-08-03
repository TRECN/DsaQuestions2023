// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        vector<string>dial={"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(digits.size()==0)
            return ans;

        backtrack("",0,digits,ans,dial);
        return ans;
        
    }
    void backtrack(string temp,int start,string digits,vector<string>&ans,vector<string>&dial){
        if(start==digits.size()){
            ans.push_back(temp);
            return;
        }
        string letters=dial[digits[start]-'0'];
        for(auto i:letters){
            backtrack(temp+i,start+1,digits,ans,dial);
        }
    }
};