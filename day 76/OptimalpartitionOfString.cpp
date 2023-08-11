// https://leetcode.com/problems/optimal-partition-of-string/description/?envType=study-plan-v2&envId=amazon-spring-23-high-frequency
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int partitionString(string s) {
        int count=0;
        set<char>st;
        for(auto i:s){
            if(st.find(i)!=st.end()){
                count++;
                st.clear();        
                st.insert(i);
            }
            else{
                st.insert(i);
            }
        }
        if(!st.empty())
            count++;
        return count;
    }
};