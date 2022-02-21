// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:

// vector<bool>check(250,true);
// check[1]=true;

bool checkprime(int i){
    if(i==1)return false;
    if(i==2||i==3)return true;
    if(i%2==0||i%3==0)return false;
    for(int x=5;x*x<=i;x+=6){
        if((i%x)==0||i%(x+2)==0)return false;
        
    }return true;
}

    vector<int> sieveOfEratosthenes(int n)
    {
        int count=0;
        vector<int>ans;
        for(int i=2;i<=n;i++){
            {
            if(checkprime(i)==true){
                ans.push_back(i);
               
            }
        }}
    return ans;}
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends