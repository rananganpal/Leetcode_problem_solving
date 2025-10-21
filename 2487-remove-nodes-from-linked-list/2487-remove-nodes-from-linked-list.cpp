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
    ListNode* removeNodes(ListNode* head) {
      vector<int>stack(pow(10,5),0);
      int top=-1;
      ListNode* ptr=head;
      while (ptr){
        if (top<0 || stack[top]>=ptr->val){
         top++; 
         stack[top]=ptr->val;
        } else {
          int j=top-1,p=1;
          for (int i=j;j>=0;j--){
            if (stack[j]>=ptr->val){
                top=j;
                top++; stack[top]=ptr->val;
                p=0; break;
            }
          }
          if (p==1){
            top=0; stack[top]=ptr->val;
          }
      }
      ptr=ptr->next;
     }
     ptr=head;
     ListNode* ptr1=NULL;
     int k=0;
     while (k<=top){
     ptr->val=stack[k];
     ptr1=ptr;
     k++; ptr=ptr->next;
     }
     ptr1->next=NULL;
     return head;
    }
};