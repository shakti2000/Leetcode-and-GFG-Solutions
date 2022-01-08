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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     ListNode*run1=list1;
        ListNode*run2=list2;
        a--;
        while(a--){
            run1=run1->next;
            b--;        
        }
        ListNode*temp=run1->next;
        run1->next=run2;
        while(run2->next!=NULL){
            run2=run2->next;
        }
    
        run1=temp;
        while(b--){
            run1=run1->next;
        }
        run2->next=run1;
        
        return list1;
    }
};