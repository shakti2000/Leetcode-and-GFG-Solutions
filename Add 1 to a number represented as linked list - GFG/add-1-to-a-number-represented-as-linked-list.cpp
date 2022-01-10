// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node* head)
{
    // Your Code here
    // return head of list after adding one
    Node* ln = head;
    if (head->next == NULL) {
        head->data += 1;
        return head;
    }
    Node* t = head;
    int prev;
    while (t->next) {
        if (t->data != 9) {
            ln = t;
        }
        t = t->next;
    }
    if (t->data == 9 && ln != NULL) {
        if (ln->data == 9 && ln == head) {
            Node* temp = new Node(1);
            temp->next = head;
            head = temp;
            t = ln;
        }
        else {
            t = ln;
            t->data += 1;
            t = t->next;
        }
        while (t) {
            t->data = 0;
            t = t->next;
        }
    }
    else {
        t->data += 1;
    }
    return head;
}
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends