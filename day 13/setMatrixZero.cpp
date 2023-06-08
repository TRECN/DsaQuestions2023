// https://leetcode.com/problems/set-matrix-zeroes/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool col1=false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(matrix[i][j]==0){
                   if(j!=0)
                   matrix[0][j]=0;
                   else
                    col1=true;
                   matrix[i][0]=0;
               }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]!=0)
                    if(matrix[i][0]==0||matrix[0][j]==0)
                        matrix[i][j]=0;
            }
        }
        if(matrix[0][0]==0){
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }
        if(col1==true){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};