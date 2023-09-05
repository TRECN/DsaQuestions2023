// https://leetcode.com/problems/copy-list-with-random-pointer/description/

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
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
private:
    unordered_map<Node*, Node*> visited;

public:
    Node* getClonedNode(Node* node) {
        if (node != nullptr) {
            if (visited.find(node) != visited.end()) {
                return visited[node];
            } else {
                visited[node] = new Node(node->val);
                return visited[node];
            }
        }
        return nullptr;
    }

    Node* copyRandomList(Node* head) {
        if (head == nullptr) {
            return nullptr;
        }

        Node* oldNode = head;

        Node* newNode = new Node(oldNode->val);
        visited[oldNode] = newNode;

        while (oldNode != nullptr) {
            newNode->random = getClonedNode(oldNode->random);
            newNode->next = getClonedNode(oldNode->next);

            oldNode = oldNode->next;
            newNode = newNode->next;
        }

        return visited[head];
    }
};