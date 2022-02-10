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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        if(head->next->next==NULL){
            if(head->val!=head->next->val)return head;
            else {ListNode*head1=NULL;
                        return head1;}
        }
        int temp;
        int flag=0;
        ListNode*head1=new ListNode();
        ListNode*yhabharna=head1;
        ListNode*prev;
        if(head->val!=head->next->val){temp=head->val;
                                       yhabharna->val=temp;
                                       ListNode*n=new ListNode();
                                       yhabharna->next=n;
                                       prev=yhabharna;
                                       yhabharna=yhabharna->next;
                                       flag=1;
                                      }
        ListNode*a=head;
       // cout<<"step2"<<endl;
        //int flag=0;
        ListNode*b=head->next;
        
        ListNode*c=head->next->next;
      //  cout<<"step3"<<endl;
        while(c!=NULL){
            if(a->val!=b->val&&b->val!=c->val){
               // cout<<"stepinside"<<endl;
                yhabharna->val=b->val;
                ListNode*n=new ListNode();
                yhabharna->next=n;
                prev=yhabharna;
                flag=1;
                yhabharna=yhabharna->next;
                
            }
            if(c->next==NULL&&b->val!=c->val){
                    yhabharna->val=c->val;
                                       ListNode*nz=new ListNode();
                                       yhabharna->next=nz;
                prev=yhabharna;
                flag=1;
                                       yhabharna=yhabharna->next;
                    break;
                }
        
            a=a->next;
            b=b->next;
            c=c->next;
        }
        
            prev->next=NULL;
       // delete(yhabharna);
      if(flag==0){
          ListNode*ans=NULL;
          return ans;
      }  
    return head1;}
};