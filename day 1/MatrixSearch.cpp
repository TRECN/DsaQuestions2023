// https://leetcode.com/problems/search-a-2d-matrix/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=matrix[0].size();
        vector<int>Smat;
        for(auto i:matrix){
            if(target<i[s-1]){
                Smat=i;
                break;
            }
            else if(target==i[s-1]){
                return true;
            }
        }
        int l=0,r=Smat.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(target==Smat[mid])
                return true;
            else if(target>=Smat[mid])
                l=mid+1;
            else 
                r=mid-1;
        }
        return false;
    }
};
int main()
{
    vector<vector<int>>a={
        {1,3,5,7},{10,11,16,20},{23,30,34,60}
    };
    Solution s;
    cout<<s.searchMatrix(a,99);

    return 0;
}