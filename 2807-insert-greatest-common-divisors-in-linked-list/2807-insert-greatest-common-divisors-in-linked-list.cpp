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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*ptr=head;
        int count=0;
        while (ptr){
            count++; ptr=ptr->next;
        }
        ptr=head;
        if (count==1){
            return head;
        }
        while (ptr!=NULL && ptr->next!=NULL){
          int GCD=gcd(ptr->val, ptr->next->val);
          ListNode* newNode = new ListNode(GCD);
           newNode->next = ptr->next;
            ptr->next = newNode;
            ptr= newNode->next;
        }
        return head;
    }
};