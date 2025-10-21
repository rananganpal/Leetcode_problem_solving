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
  int countDigits(long long n) {
        int c = 0;
        if (n == 0) return 1;
        while (n != 0) {
            c++;
            n /= 10;
        }
        return c;
    }
    ListNode* doubleIt(ListNode* head) {
        if (!head) return nullptr;
        // Count nodes
        int count = 0;
        ListNode* ptr = head;
        while (ptr) {
            count++;
            ptr = ptr->next;
        }
        // Special case: single node 0
        if (count == 1 && head->val == 0) {
            return head;
        }
         long long sum = 0;
        ptr = head;
        while (ptr) {
            sum = sum * 10 + ptr->val;
            ptr = ptr->next;
        }
        // Double the number
        sum *= 2;
        // Count digits of doubled number
        int digits = countDigits(sum);
        // Extract digits into vector (most significant digit first)
        vector<int> digitsVec(digits);
        for (int i = digits - 1; i >= 0; i--) {
            digitsVec[i] = sum % 10;
            sum /= 10;
        }
        ptr = head;
        int i = 0;
        // Update existing nodes
        while (ptr && i < digits) {
            ptr->val = digitsVec[i++];
            if (!ptr->next && i < digits) {
                // Need to add new nodes if doubled number has more digits
                ptr->next = new ListNode(0);
            }
            ptr = ptr->next;
        }
        return head;
    }
};