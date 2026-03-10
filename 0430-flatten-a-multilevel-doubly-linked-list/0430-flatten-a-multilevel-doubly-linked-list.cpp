/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
  Node* f(Node* head) {
        Node* curr=head;
        Node* last=NULL;
        while (curr) {
            Node* next=curr->next;
            if (curr->child) {
                Node* childHead=curr->child;
                Node* childTail=f(childHead);
                curr->next=childHead;
                childHead->prev=curr;
                curr->child=NULL;
                if (next) {
                    childTail->next=next;
                    next->prev=childTail;
                }
                last=childTail;
                curr=childTail;
            } else {
                last=curr;
            }
            curr=curr->next;
        }
        return last;
    }
    Node* flatten(Node* head) {
        if (!head) return NULL;
        f(head);
        return head;
    }
};