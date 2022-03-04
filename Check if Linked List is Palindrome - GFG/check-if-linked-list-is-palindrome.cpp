// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include <bits/stdc++.h>
class Solution{
  public:
    bool palcheck(vector<int>&nums){
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]!=nums[j])return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(Node *head)
    {
        vector<int>nums;
        Node*runner=head;
        while(runner!=NULL){
            nums.push_back(runner->data);
            runner=runner->next;
        }
    return palcheck(nums);}
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends