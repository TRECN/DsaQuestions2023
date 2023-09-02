// https://leetcode.com/problems/count-substrings-that-differ-by-one-character/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans=0;
        int n=s.size();
        int m=t.size();
        for(char i=0;i<n;i++){
            for(char j=0;j<m;j++){
                int a=i,b=j,c=0;
                while(a<n&&b<m){
                    if(s[a]!=t[b])c++;
                    if(c==1)ans++;
                    if(c==2)break;
                    a++;
                    b++;
                }
                
            }
        }
        return ans;

    }
};