// https://leetcode.com/problems/jump-game/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    bool jump(vector<int>&a,int n,vector<int>&t){
        if(n==a.size()-1)
            return t[n]=true;
        if(a[n]==0)return t[n]=false;
        if(t[n]!=-1)return t[n];
        int MaxJump=n+a[n];
        for(int i=n+1;i<=MaxJump;i++){
            if(i<a.size()&&jump(a,i,t))
                return t[n]=true;
        }
        return t[n]=false;
    }
    bool canJump(vector<int>& a) {
        vector<int>t(a.size(),-1);
        return jump(a,0,t);

    }
};