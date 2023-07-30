// https://leetcode.com/problems/clone-graph/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>mp;
        if(!node)
            return NULL;
        
        Node* first = new Node(node->val,{});
        mp[node]=first;
        queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            for(auto neighbor:curr->neighbors){
                if(mp.find(neighbor)==mp.end()){
                    mp[neighbor]=new Node(neighbor->val,{});
                    q.push(neighbor);
                }
                mp[curr]->neighbors.push_back(mp[neighbor]);
            }
        }
        return first;
    }
};