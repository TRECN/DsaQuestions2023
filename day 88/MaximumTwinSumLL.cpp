// https://leetcode.com/submissions/detail/1029372563/
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
    int pairSum(ListNode* head) {
        vector<int>a;
        while(head){
            a.push_back(head->val);
            head=head->next;
        }
        int maxi=0;
        int n=a.size();
        for(int i=0;i<(n/2);i++){
            maxi=max(maxi,a[i]+a[n-i-1]);
        }
        return maxi;
    }
};