// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void helper(int i,int &ans,string s){
      unordered_set<int>x;
      int cl=0;
      for(int j=i;j<s.length();j++){
          x.insert(s[j]);
          cl++;
          //cout<<cl;
          if(x.size()==3){
              if(cl<ans)ans=cl;
              //cout<<endl;
              return;
          }
      }
      //cout<<endl;
  }
    int smallestSubstring(string s) {
       unordered_set<int>x;
        for(auto it:s){
           if(x.size()==3)break;
            x.insert(it);
        }
       // cout<<x.size();
        if(x.size()!=3)return -1;
      int ans=INT_MAX;
      for(int i=0;i<s.length()-2;i++){
        while(s[i]==s[i+1])i++;
        helper(i,ans,s);}
    return ans;}
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends