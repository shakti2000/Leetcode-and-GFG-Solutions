// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        long long count = 0;
        unordered_map<string,long long>mp;
        int a = (to_string(X)).length()-1;
        string Y = to_string(X);
        for(int i = 0 ; i<N;i++){
            mp[to_string(numbers[i])]++;
        }
        int j = 0;
            for(int i = 0 ; i<=a-1;i++){
                j++;
            string b = Y.substr(0,j);
            string c = Y.substr(j,a);
            if(mp.count(b)&&mp.count(c)){
                if(b==c){
                long long n = ((*(mp.find(c))).second);
                long long fact = 1;
                count = count + n*(n-1);
            }
            else{
                count = ((*(mp.find(b))).second)*((*(mp.find(c))).second)+count;
            }
            }
        }
        return count;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends