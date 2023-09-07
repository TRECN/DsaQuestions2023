// https://leetcode.com/problems/find-all-anagrams-in-a-string/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int>m1,m2;
        int n=s.size();
        int k=p.size();
        vector<int>ans;
        for(int i=0;i<k;i++){
            m1[s[i]]++;
            m2[p[i]]++;
        }
        if(m1==m2)ans.push_back(0);
        for(int i=k;i<n;i++){
            m1[s[i]]++;
            m1[s[i-k]]--;
            if(m1[s[i-k]]==0)
                m1.erase(s[i-k]);
            if(m1==m2)ans.push_back(i-k+1);
        }
        return ans;
    }
};