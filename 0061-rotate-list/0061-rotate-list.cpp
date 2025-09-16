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
    ListNode* rotateRight(ListNode* head, int k) {
             if (!head || !head->next || k == 0) return head;
        // Count the length and get the last node
        int count = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            count++;
        }
        // Make the list circular
        tail->next = head;
        // Find the new tail: (count - k % count - 1)th node
        k = k % count;
        int stepsToNewTail = count - k - 1;
        ListNode* newTail = head;
        for (int i = 0; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }
        // The new head is next of newTail
        ListNode* newHead = newTail->next;
        // Break the circle
        newTail->next = nullptr;
        return newHead;
    }
};