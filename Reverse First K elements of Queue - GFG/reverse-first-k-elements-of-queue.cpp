// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
   while(k-->0) // 3 2 1
   {
       s.push(q.front()); // 1 2 3
       q.pop();// q = 2 3 4 5 | 3 4 5 | 4 5 & s = 1 2 3
   }
   queue<int> res;
   while(!s.empty())
   {
       res.push(s.top()); //3 2 1
       s.pop();
   }
   while(!q.empty())
   {
       res.push(q.front()); // 3 2 1 4 | 3 2 1 4 5
       q.pop();
   }
   return res;
}