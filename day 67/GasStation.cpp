// https://leetcode.com/problems/gas-station/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n(gas.size());
        int totalGas(0),totalCost(0);
        int cur(0),start(0);
        for(int i=0;i<n;i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
            cur+=gas[i]-cost[i];
            if(cur<0){
                start=i+1;
                cur=0;
            }
        }
        return (totalGas<totalCost)?-1:start;
    }
};