// https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description/
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
        ListNode* cur=head;
        ListNode* prev=NULL,*next=NULL;
        while(cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* a=reverse(head);
        int carry=0;
        ListNode* temp=a;
        while(temp){
            int sum = temp->val+temp->val+carry;
            temp->val=sum%10;
            carry=sum/10;
            if(temp->next==NULL&&carry>0){
                ListNode* node = new ListNode(carry,NULL);
                temp->next=node;
                break;
            }
            temp=temp->next;
        }
        
        return reverse(a);
    }
};