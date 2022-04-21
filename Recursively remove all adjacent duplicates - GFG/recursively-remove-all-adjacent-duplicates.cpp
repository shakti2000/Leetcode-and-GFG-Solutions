// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
bool checker(string s){
    if(s.length()==0||s.length()==1)return true;
    for(int i=1;i<s.length();i++ ){
        if(s[i]==s[i-1])return false;
    }
    return true;
}
string helper(string s){
    string ans="";
    vector<char>temp;
       temp.push_back(s[0]);
       for(int i=1;i<s.length();i++){
           if(s[i]==s[i-1]){
               temp.pop_back();
               while(s[i]==s[i-1])i++;
               i--;
               continue;
           }
           temp.push_back(s[i]);
       }
       for(auto it:temp)ans+=it;
       if(checker(ans)==true) return ans;
       else return helper(ans);
}
    string remove(string s){
       string ans=helper(s);
return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends