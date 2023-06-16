// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/
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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *s=head;
        ListNode *f=head->next;

        if (head->next==NULL) return NULL;
        if(f->next==NULL)
        {
            s->next=NULL;
            return head;
        } 
        ListNode* x=NULL;
        while(f&&f->next){
            
            x=s;
            f=f->next->next;
            s=s->next;
        }
        if(f==NULL)
            x->next=s->next;
        else if(f->next==NULL)
            s->next=s->next->next;
        return head;
    }
    
};