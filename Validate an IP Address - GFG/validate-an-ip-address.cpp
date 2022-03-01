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
            // code here
            int i = 0;
            for(int j = 0; j < 4; j++){
                int start = i;
                while(i < s.length() && s[i] != '.'){
                    if(s[i] > '9' || s[i] < '0'){
                        return 0;
                    }
                    i++;
                }
                string num = s.substr(start, i - start);
                if(num.length() == 0 || num.length() > 3 
                    || (num[0] == '0' && num.length() > 1) 
                    || stoi(num) > 255){
                    return 0;
                }
                if(j != 3 && i >= s.length()){
                    return 0;
                }
                if(j == 3 && i < s.length()){
                    return 0;
                }
                i++;
                
            }
            return 1;
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