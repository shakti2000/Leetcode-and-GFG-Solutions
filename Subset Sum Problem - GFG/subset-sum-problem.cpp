// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
      bool isSubsetSum(int n, int arr[], int sum){
       // code here
       int t[n+1][sum+1];
       int i,j;
       for(i=0;i<=n;i++){
           for(j=0;j<=sum;j++){
               if(i==0){
                   t[i][j]=false;
               }
               if(j==0){
                   t[i][j]=true;
               }
           }
       }
       
       for(i=1;i<n+1;i++){
           for(j=0;j<sum+1;j++){
               if(arr[i-1]<=j){
                   t[i][j]=t[i-1][j-arr[i-1]] or t[i-1][j];
               }
               if(arr[i-1]>j){
                   t[i][j]=t[i-1][j];
               }
           }
       }
       return t[n][sum];
   }
};
// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends