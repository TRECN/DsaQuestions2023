// https://leetcode.com/problems/valid-parenthesis-string/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    bool checkValidString(string s) {
        int open=0,notClose=0;
        for(auto i:s){
            if(i=='(')open++;
            else open--;
            if(i!=')')notClose++;
            else notClose--;
            if(notClose<0)break;
            open=max(open,0);
        }
        if(open==0)
            return true;
        return false;
        
    }
};