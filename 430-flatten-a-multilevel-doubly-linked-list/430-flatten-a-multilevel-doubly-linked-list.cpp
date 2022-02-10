/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    void traverse(Node *head,vector<int>&x){
        if(head==NULL)return;
        x.push_back(head->val);
        traverse(head->child,x);
        traverse(head->next,x);
    }
    Node* flatten(Node* head) {
        if(head==NULL)return head;
        vector<int>x;
        traverse(head,x);
        Node *n=new Node;
        Node*temp=n;
        Node*pehla=n;
        n->val=x[0];
        n->prev=NULL;
        n->next=NULL;
        for(int i=1;i<x.size();i++){
            Node *z=new Node;
        temp->next=z;
            z->val=x[i];
        z->prev=temp;
        z->next=NULL;
            temp=z;
        }
    return pehla;}
};