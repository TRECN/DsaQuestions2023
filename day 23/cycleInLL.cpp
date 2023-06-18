
// https://leetcode.com/problems/linked-list-cycle/description/
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
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        if(!head){
            return false;
        }
        while(temp->next){
            if(temp>=temp->next){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};