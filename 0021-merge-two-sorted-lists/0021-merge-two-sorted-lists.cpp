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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=NULL;
        int count=0;
        if (list1==NULL && list2==NULL){
            return NULL;
        }
        if (list1==NULL){
            head=list2;
           return head;
        }
        if (list2==NULL){
            head=list1;
            return head;
        }
        ListNode* ptr=list1;
        while (ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=list2;
        ptr=list1;
        while (ptr!=NULL){
         count++;
         ptr=ptr->next;
        }
        if (count==1){
         return list1;
        }
        ptr=list1;
      vector<int>arr(count,0);
      int i=0;
      while (ptr!=NULL){
       arr[i]=ptr->val;
       i++; ptr=ptr->next;
      }
      sort(arr.begin(),arr.end());
      i=0;
      ptr=list1;
      while (ptr!=NULL){
        ptr->val=arr[i];
        i++; ptr=ptr->next;
      }
      return list1;
    }
};