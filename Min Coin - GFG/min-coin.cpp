// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	void calculate(vector<int>&nums,int amount,int &ans,int cs,int cc,int j){
	   // int ans=0;
	   if(cc>ans)return ;
	    if(cs>amount)return;
	    if(cs==amount){if(cc<ans)ans=cc;return;}
	    for(int i=j;i<nums.size();i++){
	        calculate(nums,amount,ans,cs+nums[i],cc+1,i);
	    }
	    return ;
	}
	int MinCoin(vector<int>nums, int amount)
	{
	    int ans=INT_MAX;
	    int cs=0;
	   sort(nums.begin(),nums.end());
	   reverse(nums.begin(),nums.end());
	   calculate(nums,amount,ans,cs,0,0);
	if(ans!=INT_MAX)return ans;
	else return -1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends