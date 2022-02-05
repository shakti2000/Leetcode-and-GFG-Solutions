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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        multiset<int>s;
        for(int i=0;i<lists.size();i++){
            ListNode*temp=lists[i];
            if(temp==NULL)continue;
            while(temp!=NULL){
                s.insert(temp->val);
                temp=temp->next;
            }
        }
        if(s.size()==0){
            ListNode*head=NULL;
            return head;
        }
        ListNode*head=new ListNode();
        ListNode*temp=head;
        vector<int>ans;
        for(auto it=s.begin();it!=(s.end());it++){
            temp->val=*it;
            if(it!=(--s.end())){
            ListNode*n=new ListNode();
            temp->next=n;
            temp=n;}
        }
return head;    }
};