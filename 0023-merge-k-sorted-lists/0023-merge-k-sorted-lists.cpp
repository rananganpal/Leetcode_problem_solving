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
  ListNode* f(ListNode* l1,ListNode* l2){
    ListNode dummy(-1);
    ListNode* current=&dummy;
    while (l1 && l2){
        if (l1->val<=l2->val) {
            current->next=l1;
            l1=l1->next;
        } else {
            current->next=l2;
            l2=l2->next;
        }
        current=current->next;
    }
    if (l1) {
        current->next=l1;
    } else {
        current->next=l2;
    }
    return dummy.next;
  }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size()==0) return NULL;
        ListNode* head=lists[0];
        for (int i=1;i<lists.size();i++){
            head=f(head,lists[i]);
        }
        return head;
    }
};