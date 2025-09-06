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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count=0;
        ListNode*ptr=head;
        while (ptr){
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        if (right==left){
            return head;
        }
        if (left==1 && right==count){
            ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* nextNode = curr->next; 
        curr->next = prev;             
        prev = curr;                   
        curr = nextNode;            
    }
        return prev;
        }
         ListNode*ptr1=head;
          ListNode*ptr2=head;
        int l=1,r=1;
        while (l!=left){
            l++; ptr1=ptr1->next;
        }
         while (r!=right){
            r++; ptr2=ptr2->next;
        }
        ptr=ptr1;
        vector<int>vec;
        while (ptr1!=ptr2->next){
            vec.push_back(ptr1->val);
            ptr1=ptr1->next;
        }
        ptr1=ptr;
        vector<int>arr(vec.size(),0);
        for (int i=0;i<vec.size();i++){
            arr[i]=vec[vec.size()-1-i];
        }
        int p=0;
        while (ptr1!=ptr2->next){
            ptr1->val=arr[p++];
            ptr1=ptr1->next;
        }
        return head;
    }
};