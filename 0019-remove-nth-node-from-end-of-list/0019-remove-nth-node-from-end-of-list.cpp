/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* p=head;
        while (p!=NULL){
            c++;
            p=p->next;
        }
        p=head;
       if (c==1 && n==1){
        return NULL;
       }
        n=c-n+1;
       int count=2;
       if (n==1){
        head=head->next;
        return head;
       }
       while (count!=n){
        p=p->next;
        count++;
    }
    p->next=p->next->next;
    return head;
    }
};