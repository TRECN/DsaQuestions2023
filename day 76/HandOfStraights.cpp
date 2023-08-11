// https://leetcode.com/problems/hand-of-straights/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>m;
        for(auto i:hand){
            m[i]++;
        }
        while(!m.empty()){
            int cur=m.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(m[cur+i]>0&&--m[cur+i]==0){
                    m.erase(cur+i);
                }
                else if(m[cur+i]==0){
                    return false;
                }
            }
        }
        return true;
        
    }
};