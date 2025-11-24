/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA==headB) return headA;
       int count_head1=0,count_head2=0;
       ListNode* ptr1=headA,*ptr2=headB;
       while (ptr1){
        count_head1++;
        ptr1=ptr1->next;
       }
       while (ptr2){
        count_head2++;
        ptr2=ptr2->next;
       }
       ptr1=headA,ptr2=headB;
       if (count_head1>count_head2){
        for (int i=0;i<count_head1-count_head2;i++){
            ptr1=ptr1->next;
        }
       } else if (count_head1<count_head2){
        for (int i=0;i<count_head2-count_head1;i++){
            ptr2=ptr2->next;
        }
       }
       while (ptr1 && ptr2){
        if (ptr1==ptr2)
         return ptr1;
         ptr1=ptr1->next;
         ptr2=ptr2->next;
       }
       return NULL;
    }
};