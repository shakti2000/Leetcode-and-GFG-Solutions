// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        sort(str.begin(), str.end());
        
        int sum = 0, i = 0;
        while(i<str.length() and isdigit(str[i])) {
            sum += str[i]-'0';
            i++;
        }
        
        return str.substr(i)+to_string(sum);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends