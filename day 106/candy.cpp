// https://leetcode.com/problems/candy/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>candy(ratings.size(),1);
        for(int i=0;i<n-1;i++){
            if(ratings[i]<ratings[i+1])
                candy[i+1]=candy[i]+1;
        }
        int sum=0;
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                if(candy[i]<candy[i+1]+1)
                  candy[i]=candy[i+1]+1;
            }
        }
        return accumulate(candy.begin(),candy.end(),sum);
    }
};