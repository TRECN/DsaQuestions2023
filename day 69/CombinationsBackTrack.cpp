// https://leetcode.com/problems/combinations/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(int start,int end,vector<int>& temp,int &k){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<=end;i++){
            temp.push_back(i);
            backtrack(i+1,end,temp,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>temp;
        backtrack(1,n,temp,k);
        return ans;
    }
};