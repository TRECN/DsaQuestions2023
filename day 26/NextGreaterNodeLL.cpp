
// https://leetcode.com/problems/next-greater-node-in-linked-list/description/
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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>next;
        while(head){
            ListNode* temp=head->next;

            while(temp){
                if(temp->val>head->val){
                    next.push_back(temp->val);

                    break;
                }
                temp=temp->next;
            }
            if(!temp)next.push_back(0);
            head=head->next;
        }
        return next;
    }
};