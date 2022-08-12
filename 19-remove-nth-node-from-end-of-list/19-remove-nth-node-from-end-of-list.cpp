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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int totalNode=0;
        ListNode*temp=head;
        while(temp!=NULL){
            totalNode++;
            temp=temp->next;
        }
        if (totalNode==1)return NULL;
        int x=totalNode-n-1;
        if(x==-1)return head->next;
        cout<<totalNode<<","<<x<<","<<n<<endl;
        temp=head;
        while(x-->0){
            head=head->next;
        }
       // if(head->next=NULL)return temp;
        head->next=head->next->next;
        return temp;
    }
};