// https://leetcode.com/problems/add-two-numbers-ii/description/
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
    ListNode* reverse(ListNode* head){
        ListNode *p,*q;
        p=head,q=NULL;
        while(p){
            ListNode* temp=p->next;
            p->next=q;
            q=p;
            p=temp;
        }
        return q;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p=reverse(l1);
        ListNode* q=reverse(l2);

        ListNode* head,*last;
        head=last=new ListNode(-1);
        int carry=0;
        while(p||q){
            int Csum=(p?p->val:0)+(q?q->val:0)+carry;
            ListNode* temp = new ListNode(Csum%10);
            last->next=temp;
            last=temp;
            carry=Csum/10;
            if(p)p=p->next;
            if(q)q=q->next;

        }
        if(carry!=0){
            ListNode* temp=new ListNode(carry);
            last->next=temp;
            last=temp;
        }
        head=head->next;
        head=reverse(head);
        return head;
    }
};