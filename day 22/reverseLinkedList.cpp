// https://leetcode.com/problems/reverse-linked-list/description/
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
    ListNode* reverseList(ListNode* head) {
        ListNode *a=head;
        ListNode *b=NULL;
        ListNode *c;
        while(a){
            c=a->next;
            a->next=b;
            b=a;
            a=c;
        }
        return b;
    }
};