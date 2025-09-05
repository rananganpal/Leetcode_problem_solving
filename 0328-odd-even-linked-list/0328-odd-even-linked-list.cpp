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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* ptr=head;
        int count=0;
        while (ptr){
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        vector<int>vec(count,0);
        int c=1,p=0;
        while (ptr){
            if (c%2==1){
               vec[p++]=ptr->val;
            }
            c++;
            ptr=ptr->next;
        }
        ptr=head;
           c=1;
        while (ptr){
            if (c%2==0){
               vec[p++]=ptr->val;
            }
            c++;
            ptr=ptr->next;
        }
        ptr=head;  p=0;
        while (ptr){
           ptr->val=vec[p++];
           ptr=ptr->next;
        }
        return head;
    }
};