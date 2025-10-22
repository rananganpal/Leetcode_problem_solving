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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       unordered_map<int,int>m;
       for (int i=0;i<nums.size();i++){
        m[nums[i]]+=1;
       }
       while (head){
        if (m[head->val]==0){
            break;
        } else {
            head=head->next;
        }
       }
       ListNode* ptr=head;
        while (ptr && ptr->next){
          if (m[ptr->next->val]==0){
            ptr=ptr->next;
          } else {
            ptr->next=ptr->next->next;
          }
        }
        return head;
    }
};