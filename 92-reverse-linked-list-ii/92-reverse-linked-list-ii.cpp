class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) { 
        ListNode* leftNode;
        ListNode* rightNode;
        ListNode* prevLeft;
        ListNode* nextRight;
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        int id = 0;
        while (curr != nullptr) {
            if (id == left - 1) {
                leftNode = curr;
                prevLeft = prev;
            }
            
            if (id == right - 1) {
                rightNode = curr;
                nextRight = curr->next;
                break;
            }
            
            id++;
            prev = curr;
            curr = curr->next;
        }
        
        //cout << leftNode->val << " " << rightNode->val << endl;
        
        curr = leftNode, prev = nullptr;
        rightNode->next = nullptr;
        
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        if (prevLeft != nullptr) {
            prevLeft->next = rightNode;
        } else {
            head = rightNode;
        }
        leftNode->next = nextRight;
        
        return head;
    } 
};