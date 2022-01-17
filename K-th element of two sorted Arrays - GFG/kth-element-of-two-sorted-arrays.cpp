// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k){
     
     map<int, int>mp;
     
     for(int i = 0; i < n; i++) mp[arr1[i]]++;
     
     for(int j = 0; j < m; j++) mp[arr2[j]]++;
     
     int count = 0;
     
     for(auto it : mp){
         
         count += it.second;
         
         if(count >= k){
             
             count = it.first;
             break;
             
         }
         
     }
     
        return count;
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends