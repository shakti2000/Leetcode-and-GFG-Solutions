/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
           unordered_set<ListNode*>x;
        ListNode*pos=NULL;
        while(head!=NULL){
            if(x.count(head->next)){
                pos=head->next;
                return pos;
            }
            x.insert(head);
            head=head->next;
        }
    return pos;
    }
};