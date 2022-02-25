// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    vector<int>ans;
    sort(v.begin(),v.end());
    while(v.size()>0){
        int temp1=v[0];
        while(v[0]==temp1&&v.size()!=0)v.erase(v.begin());
        ans.push_back(v.size());
        }
        ans.pop_back();
    return ans;}
};

// { Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}  // } Driver Code Ends