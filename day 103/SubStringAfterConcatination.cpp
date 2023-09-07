// https://leetcode.com/problems/substring-with-concatenation-of-all-words/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        map<string,int>m;
        for(auto i:words){
            m[i]++;
        }  
        int t=words.size();
        int k=words[0].size();
        int l=t*k;
        int n=s.size();
        vector<int>ans;
        for(int i=0;i<n-l+1;i++){
            map<string,int>m1;
            int j=i;
            while((j-i)+k-1<l){
                string temp=s.substr(j,k);
                m1[temp]++;
                j+=k;
            }
            }
            if(m==m1)
                ans.push_back(i);
        }
        return ans;
    }
};