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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            head=NULL;
            return head;
        }
        if(head->next->next==NULL){
            head->next=NULL;
            return head;
        }
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast->next!=NULL){
            if(fast->next->next==NULL){
                fast=fast->next;
                continue;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=slow->next->next;
        delete(temp);
  return head;  }
};