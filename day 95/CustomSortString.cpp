// https://leetcode.com/problems/custom-sort-string/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    string customSortString(string order, string s) {
        map<int,char>m;
        map<char,int>n;
        for(int i=0;i<order.size();i++)
            m[i]=order[i];
        int j=0;
        for(auto i:s){
            n[i]++;
        }
        string ans="";
        for(auto i:m){
            char ch=i.second;
            if(n.find(ch)!=n.end()){
                for(int j=0;j<n[ch];j++){
                    ans+=ch;
                }
                n.erase(ch);
            }
        }
        for(auto i:n){
            char ch=i.first;
            for(int j=0;j<i.second;j++){
                ans+=ch;
            }
        }
        return ans;

    }
};