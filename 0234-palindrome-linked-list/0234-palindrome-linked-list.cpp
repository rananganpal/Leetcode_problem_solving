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
    bool isPalindrome(ListNode* head) {
        int a=1;
          if (head==NULL){
            return false;
         }
         vector<int>vec1;
         vector<int>vec2;
        ListNode* p=head;
        while (p!=NULL){
          vec1.push_back(p->val);
          p=p->next;
        }
        ListNode* current=head;
         p=NULL;
        ListNode* ptr=NULL;
          while (current!=NULL){
        ptr=current->next;
        current->next=p;
        p=current;
        current=ptr;
       } 
       while (p!=NULL){
        vec2.push_back(p->val);
        p=p->next;
       }
        for (int i=0;i<vec1.size();i++){
            if (vec1[i]==vec2[i]){
                a=1;
            } else {
                a=0; break;
            }
        } 
       if (a==1){
        return true;
       } 
       return false;
    }
};