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
    void reorderList(ListNode* head) {
        int count=0,p=0;
        ListNode* ptr=head;
        while (ptr){
            count++; ptr=ptr->next;
        }
        ptr=head;
        
        vector<int>arr(count,0); //  store the list's elements...
        vector<int>vec(count,0); // reorder the elements of the previous array(arr[])...
        while (ptr){
                arr[p++]=ptr->val;
                ptr=ptr->next;
            }
            ptr=head;
        if (count%2==0){
            int k=0;
            for (int i=0;i<count/2;i++){
                vec[k++]=arr[i];
                vec[k++]=arr[count-1-i];
            }
        } else {
            int k=0;
            for (int i=0;i<count/2;i++){
                 vec[k++]=arr[i];
                vec[k++]=arr[count-1-i];
            }
            vec[k++]=arr[count/2];
        }
        p=0;
        while (ptr){
            ptr->val=vec[p++];
            ptr=ptr->next;
        }
    }
};