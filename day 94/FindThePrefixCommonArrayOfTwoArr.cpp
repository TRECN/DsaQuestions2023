// https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            set<int>s;
            for(int j=0;j<=i;j++){
                s.insert(A[j]);
            }

            for(int j=0;j<=i;j++){
                if(s.find(B[j])!=s.end())
                   ans[i]++;
                
            }
        }
        return ans;
    }
};