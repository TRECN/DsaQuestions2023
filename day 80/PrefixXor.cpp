// https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>arr;
        int a=0;
        for(int i=0;i<pref.size();i++){
            arr.push_back(pref[i]^a);
            a=pref[i];
        }
        return arr;
    }
};