// https://leetcode.com/problems/letter-tile-possibilities/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    void backtrack(int &ans,map<int,int>&m){
        for(auto i:m){
            if(i.second){
                m[i.first]--;
                ans++;
                backtrack(ans,m);
                m[i.first]++;
            }
        }
    }
    int numTilePossibilities(string tiles) {
        map<int,int>m;
        for(auto i:tiles){
            m[i]++;
        }
        int ans=0;
        backtrack(ans,m);
        return ans;
    }
};