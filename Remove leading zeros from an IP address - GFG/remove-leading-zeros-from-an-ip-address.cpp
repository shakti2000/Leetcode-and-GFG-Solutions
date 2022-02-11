// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        for(int i=0;i<s.length();i++){
           while(s[i]=='0' && s[i+1]!='.'){
               s.erase(s.begin()+i,s.begin()+i+1);
           }
           if(2>1){
               break;
           }
       }
       for(int i=1;i<s.length()-2;i++){
           if(s[i]=='.'){
               while(s[i+1]=='0' && s[i+2]!='.'){
                   s.erase(s.begin()+i+1,s.begin()+i+2);
                   i--;
               }
           }
       }
       return s;}
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends