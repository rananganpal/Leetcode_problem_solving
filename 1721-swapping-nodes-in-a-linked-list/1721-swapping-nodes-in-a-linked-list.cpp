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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr=head;
        int count=0,a,b;
        while (ptr){
            count+=1; ptr=ptr->next;
        }
        ptr=head;
        if (count==1 && k==1){
            return head;
        }
        int n1=(k<count-k+1)?k:count-k+1;
        int n2=(k>count-k+1)?k:count-k+1;
        if (n1==1){
           a=ptr->val;
           while (ptr->next){
            ptr=ptr->next;
           }
           b=ptr->val;
           ptr=head;
           head->val=b;
           while (ptr->next)
           ptr=ptr->next;
           ptr->val=a;
           return head;
        }
       int c=1;
       while (ptr->next){
         if (c==n1)
        a=ptr->val;
         if (c==n2)
         b=ptr->val;
         c++; ptr=ptr->next;
       }
       ptr=head;
       c=1;
       while (ptr->next){
        if (c==n1){
            ptr->val=b;
        }
        if (c==n2){
            ptr->val=a;
        }
        c++; ptr=ptr->next;
       }
       return head;
    }
};