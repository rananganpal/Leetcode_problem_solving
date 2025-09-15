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
    int pairSum(ListNode* head) {
        int count=0,p=0;
        ListNode*ptr=head;
        while (ptr){
           count+=1; ptr=ptr->next;
        }
        ptr=head;
        if (count%2!=0){
            return NULL;
        }
        if (count==2){
            return head->val+head->next->val;
        }
        vector<int>vec(count,0);
        while (ptr){
         vec[p++]=ptr->val;
         ptr=ptr->next;
        }
        ptr=head;
        int sumvalue=0,maxvalue=0;
        for (int i=0;i<count/2;i++){
            sumvalue=vec[i]+vec[count-1-i];
            maxvalue=max(sumvalue,maxvalue);
        }
        return maxvalue;
    }
};