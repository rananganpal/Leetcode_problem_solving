/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p = NULL;
    struct ListNode *current = head;
    struct ListNode *ptr = NULL;
    
    while (current != NULL){
        ptr = current->next;
        current->next = p;
        p = current;
        current = ptr;
    }
    return p;
}