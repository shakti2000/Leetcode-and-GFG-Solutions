class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return addTwoNumbersUtil(l1, l2, 0);
    }
    ListNode* addTwoNumbersUtil(ListNode* l1, ListNode* l2, int carry) {
        if(l1==NULL && l2==NULL && carry<=0) return NULL;
        if(l1==NULL && l2==NULL && carry!=0) {
            ListNode* node = new ListNode(carry);
            return node;
        }
        int a=0, b=0;
        if(l1) a=l1->val;
        if(l2) b=l2->val;
        int sum = a+b+carry;
        carry = sum/10;
        if(sum>=10)
        sum = sum%10;
        
        ListNode* node = new ListNode(sum);
        node->next = addTwoNumbersUtil(l1==NULL ? l1 : l1->next, l2==NULL ? l2 : l2->next, carry);
        return node;
    }
};