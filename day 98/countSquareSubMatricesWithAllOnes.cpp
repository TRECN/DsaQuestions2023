// https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]){
                    matrix[i][j]+=min(matrix[i-1][j-1],min(matrix[i][j-1],matrix[i-1][j]));
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans+=matrix[i][j];
            }
        }
        return ans;
    }
};