// https://leetcode.com/problems/rotate-string/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n!=m)
            return false;
        while(n--){
            string a=s.substr(0,1);
            s=s.substr(1)+a;
            if(s==goal)
                return true;
        }
        return false;
    }
};