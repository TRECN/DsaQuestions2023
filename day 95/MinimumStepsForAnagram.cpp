// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m,m1;
        for(int i:s)
            m[i]++;
        for(auto i:t)
                m1[i]++;
        for(auto i:t){
            if(m.find(i)!=m.end()){
                m[i]--;
                if(m[i]==0)
                    m.erase(i);   
            }
        }
        for(auto i:s){
            if(m1.find(i)!=m1.end()){
                m1[i]--;
                if(m1[i]==0)
                    m1.erase(i);
            }
        }
        int ans=0;
        for(auto i:m){
            ans+=i.second;
        }
        for(auto i:m1){
            ans+=i.second;
        }
        return ans;

    }
};