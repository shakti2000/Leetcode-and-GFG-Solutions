// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        vector<int>nums;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            if(s.find(arr[i])==s.end()){
                s.insert(arr[i]);
                nums.push_back(arr[i]);
            }
        }
        sort(nums.begin(),nums.end());
        int ans=1;
        int templ=1;
      for(int i=0;i<nums.size()-1;i++){
          if(nums[i+1]-nums[i]==1){
              templ++;
              if(ans<templ)ans=templ;
          }
          else{
              templ=1;
          }
      }
     return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends