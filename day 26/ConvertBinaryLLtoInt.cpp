//  https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
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
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        while(--n>=0){
            ans+=pow(2,n)*head->val;
            head=head->next;
        }
        return ans;
    }
};