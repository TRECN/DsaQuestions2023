// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/description/?source=submission-ac
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minDeletions(string s) {
        vector<int>f(26,0);
        for(auto i:s)
            f[i-'a']++;
        sort(f.begin(),f.end());
        int op=0;
        for(int i=24;i>=0;i--){
            if(f[i]>=f[i+1]){
                if(!f[i])
                    break;
                int temp=f[i];
                f[i]=max(0,f[i+1]-1);
                op+=temp-f[i];
            }
        }
        return op;
    }
};