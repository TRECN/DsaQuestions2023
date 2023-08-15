// https://leetcode.com/problems/relocate-marbles/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        map<int,long long int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(int i=0;i<moveFrom.size();i++){
            m[moveTo[i]]+=m[moveFrom[i]];
            if(moveFrom[i]!=moveTo[i])m[moveFrom[i]]=0;
        }
        vector<int>ans;
        for(auto i:m)
            if(i.second)ans.push_back(i.first);
        return ans;
    }
};