// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C

// L and R are input array
// maxx : maximum in R[]
// n: size of array
// Function to find the maximum occurred integer in all ranges.
int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        int arr[maxx+1];
        for(int i=0;i<maxx+1;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[L[i]]++;
            arr[1+R[i]]--;
        }
        for(int i=1;i<maxx;i++){
            arr[i]=arr[i-1]+arr[i];
        }
        int res=-2147483648;
        int index;
        for(int i=0;i<maxx+1;i++){
            if(arr[i]>res){
                res=arr[i];
                index=i;
            }
        }
        return index;
    }

// { Driver Code Starts.


int main() {

	int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);
		int *L;
		L = (int*)malloc(n * sizeof(int));
		int *R;
		R = (int*)malloc(n * sizeof(int));

		for (int i = 0; i < n; i++)
			scanf("%d", &L[i]);

		int maxx = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &R[i]);
			if (maxx < R[i])
				maxx = R[i];
		}

		printf("%d\n", maxOccured(L, R, n, maxx) );

	}
	return 0;
}  // } Driver Code Ends