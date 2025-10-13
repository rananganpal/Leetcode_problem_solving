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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr=l1,*prev=NULL;
        while (curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        l1=prev;
        prev=NULL; curr=l2;
        while (curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        l2=prev;
         ListNode* dummy=new ListNode(-1);
        curr=dummy;
        ListNode* temp1=l1,*temp2=l2;
        int carry=0;
        while (temp1!=NULL || temp2!=NULL){
            int sum=carry;
            if (temp1)  sum+=temp1->val;
            if (temp2) sum+=temp2->val;
            ListNode* newnode=new ListNode(sum%10);
            carry=sum/10;
            curr->next=newnode;
            curr=curr->next;
            if (temp1)
            temp1=temp1->next;
            if (temp2)
            temp2=temp2->next;
        }
            if (carry){
                   ListNode* newnode=new ListNode(carry);
                   curr->next=newnode;
            }
            ListNode* ptr=dummy->next;
            dummy->next=NULL;
      curr=ptr; prev=NULL;
      while (curr){
        ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
      }
      ptr=prev;
      return ptr;
    }
};