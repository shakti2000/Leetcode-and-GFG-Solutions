// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    static bool compare(pair<int,int> p1, pair<int,int> p2)
   {
       if(p1.second == p2.second)
           return p1.first < p2.first;
           
       return p1.second < p2.second;
   }
   
   int activitySelection(vector<int> start, vector<int> end, int n)
   {
       // Your code here
       vector<pair<int,int>> v;
       
       for(int i=0; i<n; i++)
           v.push_back({start[i],end[i]});
       
       sort(v.begin(),v.end(),compare);
       
       int ans = 1;
       
       auto prev = v[0];
       for(int i=1; i<n; i++)
       {
           auto curr = v[i];
           if(curr.first > prev.second)
            {  
               ans++;
               prev = curr;
            }
       }
       
       return ans;
   }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends