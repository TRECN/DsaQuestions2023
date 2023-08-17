// https://leetcode.com/problems/maximum-score-from-removing-stones/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>p;
        p.push(a);
        p.push(b);
        p.push(c);
        int count=0;
        while(p.size()>1){
            a=p.top();
            p.pop();
            b=p.top();
            p.pop();
            if(a-1>0)p.push(--a);
            if(b-1>0)p.push(--b);
            count++;
        }
        return count;
    }
};