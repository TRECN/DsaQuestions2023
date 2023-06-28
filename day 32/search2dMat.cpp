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
Console
