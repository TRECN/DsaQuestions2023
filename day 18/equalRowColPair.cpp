// https://leetcode.com/problems/equal-row-and-column-pairs/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int count=0;
        vector<vector<int>>grid2=grid;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++)
                swap(grid[i][j],grid[j][i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i]==grid2[j])
                count++;
            }
        }
        return count;


        

    }
};