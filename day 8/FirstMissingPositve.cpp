// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?page=1&difficulty[]=1&category[]=Searching&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s;
        int n=nums.size();
        for(auto i:nums){
            s.insert(i);
        }
        int i=1;
        while(i<=n){
            if(s.find(i)!=s.end()){
                i++;
            }
            else 
                return i;
        }
        return n+1;
    }
};

