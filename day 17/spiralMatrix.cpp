// https://leetcode.com/problems/spiral-matrix/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;

        int n=mat.size();
        int m=mat[0].size();

        int t=0,l=0,b=n-1,r=m-1;
        while(t<=b&&l<=r){
            for(int i=l;i<=r;i++)
                ans.push_back(mat[t][i]);

            t++;

            for(int i=t;i<=b;i++)
                ans.push_back(mat[i][r]);
            r--;

            if(t<=b){
                for(int i=r;i>=l;i--)
                    ans.push_back(mat[b][i]);
                b--;
            }

            if(l<=r){
                for(int i=b;i>=t;i--)
                    ans.push_back(mat[i][l]);
                
                l++;
            }
        }
        return ans;

    }
};