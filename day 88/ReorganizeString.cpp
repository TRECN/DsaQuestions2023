// https://leetcode.com/problems/reorganize-string/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>m;
        priority_queue<pair<int,char>>pq;
        for(auto i:s){
            m[i]++;
        }

        for(auto i:m){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(pq.size()>=2){
            auto one=pq.top();pq.pop();
            auto two=pq.top();pq.pop();
            cout<<one.first;
            ans+=one.second;
            ans+=two.second;
            if(--one.first)pq.push({one.first,one.second});
            if(--two.first)pq.push({two.first,two.second});
        }
        if(!pq.empty()){
            auto top=pq.top();
            cout<<top.first;
            if(top.first>1)return "";
            ans+=top.second;
        }
        return ans;
    }
};