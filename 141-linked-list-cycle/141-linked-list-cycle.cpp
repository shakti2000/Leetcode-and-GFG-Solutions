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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>x;
        //x.insert(head);
        while(head!=NULL){
            if(x.count(head->next)){
                ListNode*pos=head->next;
                return true;
            }
            x.insert(head);
            head=head->next;
        }
    return false;
    }
};