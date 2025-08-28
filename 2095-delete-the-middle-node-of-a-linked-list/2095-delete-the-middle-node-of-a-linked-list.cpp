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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode* ptr=head;
        while (ptr!=NULL){
            count++; 
            ptr=ptr->next;
        }
        ptr=head;
        if (count==1){
            return NULL;
        }
          if (count%2!=0){
            int c=2;
            count=count/2+1;
             while(count!=c){
                c++; ptr=ptr->next;
             }
             ptr->next=ptr->next->next;
          } else {
           int c=2;
            count=count/2+1;
            while (count!=c){
                c++; ptr=ptr->next;
            }
            ptr->next=ptr->next->next;
          }
          return head;
    }
};