// https://leetcode.com/problems/add-two-numbers/description/
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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=l1;
        ListNode* b=l2;
        ListNode* result=NULL;
        ListNode* temp=result;
        int carry=0;
        while(a!=NULL||b!=NULL){
            int sum=0;
            if(a!=NULL)
                sum+=a->val;
            if(b!=NULL)
                sum+=b->val;

            sum+=carry;
            if(sum>=10){
                sum=sum%10;
                carry=1;
            }
            else
                carry=0;

            if(!result){
                result= new ListNode(sum);
                temp=result;
            }
            else{
                temp->next=new ListNode(sum);
                temp=temp->next;
            }
            if(a)
                a=a->next;
            if(b)
                b=b->next;

        }
        if(carry)
            temp->next=new ListNode(carry);
        
        return result;

    }
};