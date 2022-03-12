// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        //take a stack and queue and one queue
        stack<int> s;
        queue<int> q;
        int root1=A[0],root2=B[0],prev1,prev2;
        //now we need to set some condition to fill both of them
        for(int i=0;i<2*e;i+=2)
        {
            //updating root1 and root2
            root1=A[i];
            root2=B[i];
            // check the conditions if root of 1st tree is same as its prev edge means both are children of same root
            // if not then compare the values for that particular node
            // also check for previous nodes if they are similar then only we will empty the stack and queue 
            if(root1!=prev1 && prev1==prev2)
            {
                //now see if after popping the elements it remains same                     
                while(!s.empty())
                {
                    if(s.top()!=q.front())
                        return 0;
                    s.pop();
                    q.pop();
                }
            }
            //here we will push new elements
            //only push child elements here
            s.push(A[i+1]);
            q.push(B[i+1]);
            //these prev1 and prev2 are pointers to the previous root nodes
            prev1=root1;
            prev2=root2;
        }
        //if the stack is still not empty 
        //it is useful in 1213 and 1213 type of examples
        while(!s.empty())
        {
            if(s.top()!=q.front())
                return 0;
            s.pop();
            q.pop();
        }
        return 1;
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends