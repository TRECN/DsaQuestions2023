// https://leetcode.com/problems/split-linked-list-in-parts/description/
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
    int count(ListNode* head){
        int cnt=0;
        ListNode* temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int cnt=count(head);
        int half=cnt/k;
        int flag=cnt%k;
        vector<ListNode*> ans(k);
        int i=0;
        while(i<k){
            int space=half;
            cout<<space<<" "<<flag<<endl;
            if(flag-->0)
                space++;
            ans[i]=temp;
            while(--space>0)
                if(temp)temp=temp->next;
            if(temp){
                ListNode* temp1=temp;
                temp=temp->next;
                temp1->next=NULL;
            }
            i++;
        }
        return ans;
    }
};