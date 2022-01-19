// { Driver Code Starts
// CPP program to find maximum sum
// by selecting a element from n arrays
#include<bits/stdc++.h>

using namespace std;

// To calculate maximum sum by
// selecting element from each array
int maximumSum( int n,int m, vector<vector<int>> &a);



// Driver program to test maximumSum
int main() {
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>arr[i][j];
            
        cout << maximumSum(n,m,arr)<<endl;
    
    }
    return 0;

}
// } Driver Code Ends


int maximumSum( int n,int m, vector<vector<int>> &arr) {

   int ans=0;
   int curr=INT_MAX;
   for(int i=n-1;i>=0;i--){
       int maxi=0;
       for(int j=m-1;j>=0;j--){
           if(arr[i][j]<curr){
               maxi=max(maxi,arr[i][j]);
           }
       }
       if(maxi==0)
           return 0;
       ans+=maxi;
       curr=maxi;
   }
   return ans;
}