// https://leetcode.com/problems/maximal-network-rank/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        map<int,set<int>>m;
        for(auto i:roads){
            int a=i[0];
            int b=i[1];
            m[a].insert(b);
            m[b].insert(a);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    int net=m[i].size()+m[j].size();
                    if(m[i].find(j)!=m[i].end()){
                        net--;
                    }
                    ans=max(ans,net);
                }

            }
        }
        return ans;
    }
};