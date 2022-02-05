// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
   int transfigure (string harry, string cat)
    {
    	// Your code goes here
    	unordered_map<char,int> m1,m2;
    	if(harry.size() != cat.size()) return -1;
    	int n = harry.size();
    	for(int i=0; i<n; i++)
    	  m1[harry[i]]++,m2[cat[i]]++;
    	for(int i=0; i<n; i++)
    	   if(m1[harry[i]] != m2[harry[i]])
    	     return -1;
    	int j = n-1,res = 0;
    	for(int i=n-1; i>=0; i--)
    	  harry[i] == cat[j] ? j-- : res++;
    	return res;
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends