// https://leetcode.com/problems/find-the-minimum-possible-sum-of-a-beautiful-array/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
   

    long long minimumPossibleSum(int n, int target) {
        set<long long>s;
        s.insert(1);
        long long i=2;
        while(s.size()<n){
            if(s.find(target-i)!=s.end()){
                i++;
                continue;
            }
            s.insert(i++);
        }
        long long ans=0;
        for(auto j:s)
            ans+=j;
        return ans;
        
    }
};