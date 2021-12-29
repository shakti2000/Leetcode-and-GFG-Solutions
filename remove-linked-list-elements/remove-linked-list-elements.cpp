class Solution {
public:
ListNode* removeElements(ListNode* head, int val) {
if(head==NULL)
return NULL;
ListNode* curr=head;
if(curr->next==NULL)
{
if(curr->val==val)
head=NULL;
}
while(curr->next!=NULL)
{
if(curr->next->val==val)
curr->next=curr->next->next;
else
curr=curr->next;
}
curr=head;
if(head!=NULL)
{
if(curr->val==val)
head=curr->next; }
return head;
}
};