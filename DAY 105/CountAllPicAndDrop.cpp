// https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int countOrders(int n) {
        long long ans=1;
        int mod=1e9+7;
        for(int i=1;i<=n;i++){
            ans=(ans*(2*i*i-i))%mod;
        }
        return (int)ans;
    }
};