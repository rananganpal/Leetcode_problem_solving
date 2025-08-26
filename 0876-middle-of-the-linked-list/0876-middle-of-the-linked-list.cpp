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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode *ptr=head;
        while (ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        if (count==1){
            return head;
        } 
        if (count==2){
            return head->next;
        }
        if (count%2!=0){
            count=count/2;
            int c=0;
            while (c!=count){
                c++; ptr=ptr->next;
            }} else {
                count=count/2;
                int c=0;
                while (c!=count){
                    c++; ptr=ptr->next;
                }

            }
        return ptr;
    }
};