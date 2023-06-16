// https://leetcode.com/problems/middle-of-the-linked-list/submissions/972545965/
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
    ListNode* middleNode(ListNode* head) {
        ListNode *s=head,*f=head;
        while(f&&f->next)
            s=s->next,f = f->next->next;
        return s;
    }
};