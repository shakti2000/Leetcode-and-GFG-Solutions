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
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        int even=0;
        while(fast->next!=NULL){
            if(fast->next->next==NULL){
                even=1;
                fast=fast->next;
                continue;
            }
            fast=fast->next;
            fast=fast->next;
            slow=slow->next;
        }
        if(even==0){
            return slow;}
        else{
            slow=slow->next;
            return slow;
        }
    }
};