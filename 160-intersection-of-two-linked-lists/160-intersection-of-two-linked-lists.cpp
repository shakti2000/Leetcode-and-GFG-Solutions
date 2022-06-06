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
    void traverser(ListNode *root,unordered_set<ListNode*>&s){
        
        while(root!=NULL){
            s.insert(root);
            root=root->next;
        }
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>s;
        traverser(headA,s);
        while(headB!=NULL){
            if(s.find(headB)!=s.end())return headB;
            headB=headB->next;
        }
        return NULL;
    }
};