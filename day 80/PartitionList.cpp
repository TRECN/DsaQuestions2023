// https://leetcode.com/problems/partition-list/description/
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* Temp=head;
        ListNode* ans=new ListNode(0,NULL);
        ListNode* a=ans;
        while(Temp){
            if(Temp->val<x){
                a->next=new ListNode(Temp->val,NULL);
                a=a->next;
            }
            Temp=Temp->next;
        }
        Temp=head;
        while(Temp){
            if(Temp->val>=x){
                a->next=new ListNode(Temp->val,NULL);
                a=a->next;
            }
            Temp=Temp->next;
        }
        return ans->next;
    }
};