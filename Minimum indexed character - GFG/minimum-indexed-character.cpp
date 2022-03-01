// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    
	    unordered_set<char>s;
	    for(auto it:patt){
	        s.insert(it);
	    }
	    for(auto it:S){
	        if(s.find(it)!=s.end()){
	            char temp=it;
	            string ans="";
	            ans+=it;
	            return ans;
	        }
	    }
	return "$";}
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends