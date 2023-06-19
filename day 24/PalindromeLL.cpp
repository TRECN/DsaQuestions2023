// https://leetcode.com/problems/palindrome-linked-list/description/

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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        stack<int>s;

        while(temp){
            s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(s.top()!=temp->val)
                return false;
            s.pop();
            temp=temp->next;
        }
        return true;
    }
};