// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        long long ans=0;
        int mc=1;
        if(s[0]=='-'){mc=-1;
            s.erase(s.begin());
        }
        
        long long multi=1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]>'9'||s[i]<'0')return -1;
            string temp="";
            temp+=s[i];
            ans+=stoi(temp)*multi;
            multi*=10;
        }
        
    return ans*mc;}
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
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends