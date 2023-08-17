// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>m;
        set<int>s;
        for(auto i: nums){
            m[i]++;
            s.insert(i);
        }
        vector<vector<int>>ans;
        while(m.size()){
            vector<int>temp;
            for(auto i:s){
                if(m[i]>0){
                    m[i]--;
                    temp.push_back(i);
                }
                if(m[i]==0)
                    m.erase(i);
            }
            ans.push_back(temp);
        }
        return ans;

    }
};