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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int a1=1,b1=0;
        ListNode*ptr1=list1;
        ListNode*ptr2=list1;
        while (a1!=a){
            a1++;
            ptr1=ptr1->next;
        }
        while (b1!=b){
            b1++;
            ptr2=ptr2->next;
        }
        ListNode* ptr=ptr2->next;
        ptr2=list2;
        while (ptr2->next){
            ptr2=ptr2->next;
        }
        ptr1->next=list2;
        ptr2->next=ptr;
        return list1;
    }
};