class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next)
            return head;
        
        ListNode * first = head;
        ListNode * last = head;
        int n = 1;
        
        while(last->next)
        {
            n++;
            last = last->next;
        }
        last->next = first;
        
        k%=n;
        int rotate = n - k;
        
        ListNode * prev;
        while(rotate--)
        {
            prev = first;
            first = first->next;
        }
        prev->next = NULL;
        return first;
    }
};