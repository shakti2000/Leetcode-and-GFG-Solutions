// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends


vector<int> permute(vector<vector<int>> &arr, int n)
{
   // int i=0;
    vector<pair<int,int>>ans;
    int i=1;
    for(auto it:arr){
        ans.push_back({it[0]+it[1],i});
        i++;
    }
    sort(ans.begin(),ans.end());
    vector<int>result;
    for(auto it:ans){
        result.push_back(it.second);
    }
    // Complete the function
    return result;
}