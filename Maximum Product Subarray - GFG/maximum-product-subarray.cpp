// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	
	long long maxProduct(vector<int> arr, int n) {
	    
	    long long maxProd = 1, minProd = 1, ans = INT_MIN;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] < 0)
	            swap(minProd, maxProd);
	       
	        maxProd = max(maxProd * arr[i], (long long)arr[i]);
	        minProd = min(minProd * arr[i], (long long)arr[i]);
	        
	        ans = max(ans, maxProd);
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends