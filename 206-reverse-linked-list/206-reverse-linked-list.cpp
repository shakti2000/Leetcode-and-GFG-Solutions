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
    ListNode* tailf(ListNode* root){
        ListNode*temp=root;
        while(temp->next!=NULL)temp=temp->next;
        return temp;
    }
    void reverser(ListNode*root){
        if(root->next==NULL)return;
        reverser(root->next);
        root->next->next=root;
        root->next=NULL;
        return;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*ans=tailf(head);
        reverser(head);
        
        return ans;
    }
};