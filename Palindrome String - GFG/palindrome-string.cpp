// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool checker(string &s,int start,int end){
	    if(start>=end)return true;
	    if(s[start]==s[end]){
	        return checker(s,start+1,end-1);
	    }
	    return false;
	}
	
	int isPalindrome(string s)
	{
	    return checker(s,0,s.length()-1);
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends