// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

void reverseLL(Node* &head){

   Node* prev = NULL;
   Node* curr = head;
   Node* next;

   while(curr != NULL){
       next = curr->next;
       curr->next = prev;

       prev = curr;
       curr = next;
   }

   head = prev;
}

int lenLL(Node* head){
   Node* temp = head;
   int length = 0;
   while(temp != NULL){
       length++;
       temp = temp->next;
   }
   return length;
}

class Solution
{
   public:
   //Function to add two numbers represented by linked list.
   struct Node* addTwoLists(struct Node* first, struct Node* second)
   {
       // code here
       Node* sum = new Node(-1);
       reverseLL(first);
       reverseLL(second);
       
       int size = max(lenLL(first), lenLL(second));
       
       Node* temp1 = first;
       Node* temp2 = second;
       int s;
       int carry = 0;
       Node* tempSum = sum;
       while(temp1 != NULL || temp2 != NULL || carry){
           s = 0;
           
           if(temp1 != NULL){
               s += temp1->data;
               temp1 = temp1->next;
           }if (temp2 != NULL){
               s += temp2->data;
               temp2 = temp2->next;
           }
           
           s += carry;
           carry = s/10;
           Node* node = new Node(s%10);
           tempSum->next = node;
           tempSum = tempSum->next;
       }
       sum = sum->next;
       reverseLL(sum);
       return sum;
       
       
   }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends