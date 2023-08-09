// https://leetcode.com/problems/beautiful-arrangement/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    void backtrack(int start,vector<int>&temp,int n, int &ans){
        if(start==n){
            ans++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(!temp[i]){
                if((start+1)%i==0  || i%(start+1)==0){
                    temp[i]=1;
                    backtrack(start+1,temp,n,ans);
                    temp[i]=0;
                }
            }
        }
    }
    int countArrangement(int n) {
        vector<int>temp(n+1,0);
        int ans=0;
        backtrack(0,temp,n,ans);
        return ans;
    }
};