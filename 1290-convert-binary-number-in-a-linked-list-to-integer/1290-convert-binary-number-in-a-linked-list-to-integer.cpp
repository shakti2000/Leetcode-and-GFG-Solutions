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
    void print(vector<int>x){
        for(auto it:x){
            cout<<it<<",";
        }
    }
    int getDecimalValue(ListNode* head) {
        if(head->next==NULL)return head->val;
        ListNode*temp=head;
        vector<int>number;
        long long ans=0;
        int multi=1;
        while(temp!=NULL){
           // cout<<temp->val<<",";
            number.push_back(temp->val);
            temp=temp->next;
            
        }
        reverse(number.begin(),number.end());
        //print(number);
        for(auto it:number){
            ans+=it*multi;
            multi*=2;
        }        
   return ans; }
};