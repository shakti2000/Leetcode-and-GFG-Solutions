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
    ListNode* sortList(ListNode* head) {
        ListNode*temp=head;
        multiset<int>s;
        while(temp!=NULL){
            s.insert(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(auto it:s){
            temp->val=it;
            temp=temp->next;
        }
        return head;
    }
};