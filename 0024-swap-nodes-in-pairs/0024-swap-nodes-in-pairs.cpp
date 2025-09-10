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
    ListNode* swapPairs(ListNode* head) {
        int count=0,p=0;
        if (head==NULL){
            return head;
        }
        ListNode*ptr=head;
        while (ptr){
            count++; ptr=ptr->next;
        }
        ptr=head;
        if (count==1){
            return head;
        }
        vector<int>arr(count,0);
        while (ptr){
         arr[p++]=ptr->val;
         ptr=ptr->next;
        }
        p=0; ptr=head;
        if (count%2!=0){
          for (int i=0;i<(count-1);i=i+2){
            swap(arr[i],arr[i+1]);
          }
        }else {
        for (int i=0;i<count;i=i+2){
             swap(arr[i],arr[i+1]);
         }
        }
        while (ptr){
            ptr->val=arr[p++];
            ptr=ptr->next;
        }
        return head;
    }
};