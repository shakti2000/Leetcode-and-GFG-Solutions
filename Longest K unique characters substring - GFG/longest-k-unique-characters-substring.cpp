// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        if(s.length()==1)
        {
            if(k==1)
            {
            return 1;
            }
            else
            {
                return -1;
            }
        }
        int i=0;
        int j=0;
        int n = s.length();
        unordered_map<int,int> m;
        int ans=-1;
        int count=0;
        while(j<n)
        {
            char c= s[j];
            m[c-'a']++;
            while(m.size()>k)
            {
                if(m[s[i]-'a']>1)
                {
                    m[s[i]-'a']--;
                    count--;
                }
                else if(m[s[i]-'a']==1)
                {
                    m.erase(s[i]-'a');
                    count--;
                }
                i++;
            }
            if(m.size()<k)
            {
                count++;
            }
            if(m.size()==k)
            {
                count++;
                ans = max(ans,count);
            }
            
            j++;
        }
        
        if(m.size()==k)
        {
            ans = max(ans,count);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends