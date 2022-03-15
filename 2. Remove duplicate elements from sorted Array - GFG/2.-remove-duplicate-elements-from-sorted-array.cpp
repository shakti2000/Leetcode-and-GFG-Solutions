// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
        int temp=arr[0];
        vector<int>temp1;
        temp1.push_back(arr[0]);
        int ans=1;
        for(int i=0;i<n;i++){
            if(arr[i]!=temp){
                temp1.push_back(arr[i]);
                ans+=1;
                temp=arr[i];
            }
        }
        int index=0;
        for(auto it:temp1){
            arr[index]=it;
            index++;
        }
    return ans;}
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends