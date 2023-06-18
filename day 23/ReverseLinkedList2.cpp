// https://leetcode.com/problems/reverse-linked-list-ii/description/ 

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>a;
        ListNode* temp=head;
        while(temp){
            a.push_back(temp->val);
            temp=temp->next;
        }
        reverse(a.begin()+(left-1),a.begin()+right);
        ListNode* ans=new ListNode;
        ans->val=a[0];
        ans->next=NULL;
        temp=ans;
        for(auto i:a){
            ListNode* b=new ListNode;
            b->val=i;
            b->next=NULL;
            temp->next=b;
            temp=temp->next;
        }
        return ans->next;

    }
};