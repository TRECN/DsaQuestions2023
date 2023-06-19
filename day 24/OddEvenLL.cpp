// https://leetcode.com/problems/odd-even-linked-list/description/
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
    ListNode* oddEvenList(ListNode* head) {
          if(!head)
            return NULL;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenHead=even;
      
        while(even && even->next){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next; 
        }
        odd->next=evenHead;
        return head;

    }
};