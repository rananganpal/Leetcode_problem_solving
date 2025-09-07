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
    vector<int> nextLargerNodes(ListNode* head) {
        int count=0,p=0;
        ListNode*ptr=head;
        while (ptr){
            count++; ptr=ptr->next;
        }
        ptr=head;
        vector<int>vec(count,0);
        while (ptr){
            vec[p++]=ptr->val;
            ptr=ptr->next;
        }
        for (int i=0;i<count-1;i++){
            int a=0;
            for (int j=1+i;j<count;j++){
                if (vec[i]<vec[j]){
                    vec[i]=vec[j];
                    a=1;
                    break;
                }
            }
            if (a==0){
                vec[i]=0;
            }
        }
        vec[count-1]=0;
        return vec;
    }
};