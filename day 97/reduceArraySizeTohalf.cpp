// https://leetcode.com/problems/reduce-array-size-to-the-half/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>m;
        for(auto i:arr){
            m[i]++;
        }
        vector<int>v;
        for(auto i:m){
            v.push_back(i.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int count=0;
        int ans=0;
        for(int i:v){
            count+=i;
            ans++;
            if(count>=arr.size()/2)
                break;
        }
        return ans;
    }
};