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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL&&n==1)return NULL;
     ListNode*aage=head;
        ListNode*piche=head;
        while(n--){
            aage=aage->next;
        }
        if(aage==NULL){
            head=head->next;
            return head;
        }
        while(aage->next!=NULL){
            aage=aage->next;
            piche=piche->next;
        }
        ListNode*temp=piche->next;
        piche->next=temp->next;
        delete(temp);
        return head;
    }
};