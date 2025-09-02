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
    ListNode* sortList(ListNode* head) {
        int count=0;
        if (head==NULL){
          return NULL;
        }
        ListNode* ptr=head;
        while (ptr!=NULL){
         count++;
         ptr=ptr->next;
        }
        if (count==1){
         return head;
        }
      ptr=head;
      vector<int>arr(count,0);
      int i=0;
      while (ptr!=NULL){
       arr[i]=ptr->val;
       i++; ptr=ptr->next;
      }
      sort(arr.begin(),arr.end());
      i=0;
      ptr=head;
      while (ptr!=NULL){
        ptr->val=arr[i];
        i++; ptr=ptr->next;
      }
      return head;
    }
};