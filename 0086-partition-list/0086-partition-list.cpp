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
    ListNode* partition(ListNode* head, int x) {
       ListNode* dummy=new ListNode(102);
       ListNode* temp=dummy,*ptr=head;
       while (ptr!=NULL){
        if (ptr->val<x){
            temp->next=new ListNode(ptr->val);
            temp=temp->next;
        }
        ptr=ptr->next;
       }
       ptr=head;
       while (ptr){
         if (ptr->val>=x){
            temp->next=new ListNode(ptr->val);
            temp=temp->next;
        }
        ptr=ptr->next;
       }
       return dummy->next;
    }
};