// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        map<int,vector<int>>m;
        int n=groupSizes.size();
        for(int i=0;i<n;i++){
            m[groupSizes[i]].push_back(i);
        }
        for(auto i:m){
            if(i.first==i.second.size()){
                ans.push_back(i.second);
            }
            else{
                vector<int>temp;
                int k=1;
                for(int j=0;j<i.second.size();j++){
                    if(k<i.first){
                        temp.push_back(i.second[j]);
                        k++;
                    }
                    else{
                        temp.push_back(i.second[j]);
                        ans.push_back(temp);
                        temp.clear();
                        k=1;
                    }
                }
            }
        }
        return ans;
    }
};