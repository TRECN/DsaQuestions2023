// https://leetcode.com/problems/merge-k-sorted-lists/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>>p;
        for(auto i:lists){
            while(i){
                p.push(i->val);
                i=i->next;
            }
        }
        ListNode*ans=new ListNode(-1);
        ListNode* Temp=ans;
        while(!p.empty()){
            Temp->next=new ListNode(p.top());
            Temp=Temp->next;
            p.pop();
        }
        return ans->next;
    }
};