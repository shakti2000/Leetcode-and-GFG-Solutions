// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            vector<int>temp;
            string x="";
            int cd=0;
            for(int i=0;i<s.length();i++){
                if(i<s.length()-1&&s[i]=='.'&&s[i+1]=='.')return false;
                if(s[i]=='.'){
                    if(x[0]=='0'&&x.length()>1)return false;
                    
                    cd++;
                    if(cd>3)return false;
                   // cout<<stoi(x)<<endl;
                   if(x!="")
                    temp.push_back(stoi(x));
                    x="";
                    continue;
                    
                }
                if(s[i]>'9'||s[i]<'0')return false;
                x+=s[i];
                if(x.length()>3)return false;
                if(stoi(x)>255)return false;
            }
            if(x!=""){
                if(x[0]=='0'&&x.length()>1)return false;
            temp.push_back(stoi(x));
             // cout<<stoi(x);
            }
            if(temp.size()!=4)return false;
            for(auto it:temp){
                if(it<0||it>255)return false;
            }
        return true;
            
        }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends