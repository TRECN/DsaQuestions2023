// https://leetcode.com/problems/find-and-replace-pattern/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char,int>mp;
        vector<string>ans;
        int j=0;
        for(auto i:pattern){
            if(mp.find(i)==mp.end()){
                mp[i]=j++;
            }
        }
        vector<string>st;
        for(auto i:pattern){
            st.push_back(to_string(mp[i]));
        }
        for(auto i:words){
            unordered_map<char,int>mp1;
            int k=0;
            for(auto j:i){
                if(mp1.find(j)==mp1.end())
                    mp1[j]=k++;
            }
            vector<string>st1;
            for(auto j:i){
                st1.push_back(to_string(mp1[j]));
            }   
            if(st==st1){
                ans.push_back(i);
            }  
        }
        return ans;
    }
};