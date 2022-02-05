// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
     Node *getMiddle(Node *head){
        
        Node *prevv = NULL, *slow = head, *fast = head;
        
        while(fast != NULL and fast->next != NULL)
        {
            prevv = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prevv->next = NULL;
        
        return slow;
    }
    
    // merge two sorted linked lists
    Node *merge(Node *l1, Node *l2)
    {
        if(l1 == NULL) return l1;
        if(l2 == NULL) return l2;
        
        Node *head = NULL, *tail = NULL;
        
        if(l1->data <= l2->data)
        {
            head = l1;
            tail = l1;
            l1 = l1->next;
        }
        else
        {
            head = l2;
            tail = l2;
            l2 = l2->next;
        }
        
        while(l1 != NULL and l2 != NULL)
        {
            if(l1->data <= l2->data)
            {
                tail->next = l1;
                tail = l1;
                l1 = l1->next;
            }
            else
            {
                tail->next = l2;
                tail = l2;
                l2 = l2->next;
            }
        }
        
        if(l1 == NULL)
            tail->next = l2;
        else
            tail->next = l1;
        
        return head;
    }

    // recursive merge sort for linked list
    Node* mergeSort(Node* head) {
        if(head == NULL or head->next == NULL)
            return head;
        
        Node *mid = getMiddle(head);
        Node *left = mergeSort(head);
        Node *right = mergeSort(mid);
        return merge(left, right);
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends