// https://leetcode.com/problems/minimum-penalty-for-a-shop/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty=count(customers.begin(),customers.end(),'Y');
        int Min=penalty;
        int bestHour=0;

        for(int i=1;i<=customers.size();i++){
            char ch=customers[i-1];
            if(ch=='Y')
                penalty--;
            else
                penalty++;
            
            if(penalty<Min){
                bestHour=i;
                Min=penalty;
            }
        }
        return bestHour;
    }
};