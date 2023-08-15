// https://leetcode.com/problems/find-k-closest-elements/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<int>p1;
        priority_queue<int,vector<int>,greater<int>>p2;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x)
                p1.push(arr[i]);
            else
                p2.push(arr[i]);
        }
        vector<int>ans;
        while(k--){
            if(p1.size()&&p2.size()){
                int a=p1.top();
                int b=p2.top();
                if(abs(a-x)<abs(b-x)||abs(a-x)==abs(b-x)){
                    ans.push_back(a);
                    p1.pop();
                }
                else{
                    ans.push_back(b);
                    p2.pop();
                }
            }
            else if(!p1.size()){
                ans.push_back(p2.top());
                p2.pop();
            }
            else if(!p2.size()){
                ans.push_back(p1.top());
                p1.pop();
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};