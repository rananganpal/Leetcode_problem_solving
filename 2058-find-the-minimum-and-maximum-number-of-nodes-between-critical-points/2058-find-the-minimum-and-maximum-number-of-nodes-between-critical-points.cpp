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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
       vector<int> values;
        ListNode* ptr = head;
        while (ptr) {
            values.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        int n = values.size();
        if (n < 3) {  // Need at least 3 nodes for critical points
            return {-1, -1};
        }
        vector<int> critical;
        for (int i = 1; i < n - 1; ++i) {  // i from 1 to n-2 (0-based)
            bool isLocalMax = (values[i] > values[i - 1]) && (values[i] > values[i + 1]);
            bool isLocalMin = (values[i] < values[i - 1]) && (values[i] < values[i + 1]);
            if (isLocalMax || isLocalMin) {
                critical.push_back(i + 1);  // 1-based position
            }
        }
        
        int k = critical.size();
        if (k < 2) {
            return {-1, -1};
        }
        
        // Step 3: Compute max distance (last - first)
        int maxDist = critical[k - 1] - critical[0];
        
        // Step 4: Compute min distance between consecutive critical points
        int minDist = INT_MAX;
        for (int i = 1; i < k; ++i) {
            int diff = critical[i] - critical[i - 1];
            if (diff < minDist) {
                minDist = diff;
            }
        }
        
        // Step 5: Return [minDist, maxDist]
        return {minDist, maxDist};
    }
};