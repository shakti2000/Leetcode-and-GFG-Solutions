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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*runner=head->next;
        ListNode*yhadalo=head;
        int temp=0;
        while(runner!=NULL){
             if(runner->val==0){
                 yhadalo->val=temp;
                 
                 runner=runner->next;
                 if(runner==NULL)break;
                 yhadalo=yhadalo->next;
                 temp=0;
                 continue;
             }
            temp+=runner->val;
            runner=runner->next;
        }
        yhadalo->next=NULL;
    return head;}
};