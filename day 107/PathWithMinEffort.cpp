// https://leetcode.com/problems/path-with-minimum-effort/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:


int minimumEffortPath(vector<vector<int>>& heights) {
     int R = heights.size();
    int C = heights[0].size();
    
    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};
    
    vector<vector<int>> eff(R, vector<int>(C, INT_MAX));
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    
    pq.push({0, {0, 0}});
    eff[0][0] = 0;
    
    while (!pq.empty()) {
        auto cur = pq.top();
        pq.pop();
        
        int r = cur.second.first;
        int c = cur.second.second;
        int curEffort = cur.first;
        
        if (r == R - 1 && c == C - 1) {
            return curEffort;
        }
        
        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            
            if (nr >= 0 && nr < R && nc >= 0 && nc < C) {
                int effort=abs(heights[r][c]-heights[nr][nc]);
                int newEffort = (curEffort>effort)?curEffort:effort;
                if (newEffort < eff[nr][nc]) {
                    eff[nr][nc] = newEffort;
                    pq.push({newEffort, {nr, nc}});
                }
            }
        }
    }
    
    return -1;
}
};