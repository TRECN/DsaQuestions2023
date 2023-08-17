// https://leetcode.com/problems/number-of-provinces/description/?envType=study-plan-v2&envId=leetcode-75
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>visi(n,0);
        queue<int>q;
        int ans=0;
        for(int i=0;i<n;i++){
            if(!visi[i]){
                ans++;
                q.push(i);
                visi[i]=1;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(int j=0;j<n;j++){
                        if(!visi[j]&&isConnected[node][j]){
                            q.push(j);
                            visi[j]=1;
                        }
                    }
                }
            }
        }
        return ans;
    }
};