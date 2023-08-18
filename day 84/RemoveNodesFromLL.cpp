// https://leetcode.com/problems/remove-nodes-from-linked-list/description/
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
    ListNode* removeNodes(ListNode* head) {
        vector<int>nodes;
        ListNode* temp=head;
        while(temp){
            nodes.push_back(temp->val);
            temp=temp->next;
        }
        stack<int>st;
        int n=nodes.size();
        st.push(nodes[n-1]);
        for(int i=n-2;i>=0;i--){
            if(st.top()<=nodes[i])
                st.push(nodes[i]);
        }
        ListNode* ans=new ListNode(-1);
        temp=ans;
        while(!st.empty()){
            ListNode* node=new ListNode(st.top());
            temp->next=node;
            temp=temp->next;
            st.pop();
        }
        return ans->next;
    }
};