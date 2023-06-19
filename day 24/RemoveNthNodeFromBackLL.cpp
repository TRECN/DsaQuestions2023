// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        if(!(size-1))
            return NULL;
        temp=head;
        size=size-n;
        if(!size)
        return head->next;
        while(--size){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};