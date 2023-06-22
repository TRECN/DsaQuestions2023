
// https://leetcode.com/problems/intersection-of-two-linked-lists/description/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> arr1;
        vector<ListNode*> arr2;
        ListNode* p=headA;
        ListNode* q=headB;
        while(p) {
            arr1.push_back(p);
            p=p->next;
        }
        while(q) {
            arr2.push_back(q);
            q=q->next;
        }
        ListNode* temp=NULL;
        int m=arr1.size(), n=arr2.size();
        while(m && n && arr1[m-1] == arr2[n-1]) {
            if(arr1[m-1] == arr2[n-1]) temp=arr1[m-1];
            m--;
            n--;
        }
        return temp;
    }
};