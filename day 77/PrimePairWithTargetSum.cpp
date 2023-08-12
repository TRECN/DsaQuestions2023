// https://leetcode.com/problems/prime-pairs-with-target-sum/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<bool>prime;
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>ans;
        prime.resize(n+1,true);
        for(int i = 2;i <= n; ++i)
        if(prime[i]) 
            for(int j = 2 * i;j <= n; j += i)
                prime[j] = false;
        for(int i=2;i+i<=n;i++){
            if(prime[i]&&prime[n-i]&&n-i>1){
                ans.push_back({i,n-i});
            }
        }
        
        return ans;
    }
    
};