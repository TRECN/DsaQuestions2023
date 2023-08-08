// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minPartitions(string n) {
        priority_queue<char>q;
        for(auto i:n){
            q.push(i);
        }
        return (q.top()-'0');
    }
};