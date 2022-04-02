class Solution {
public:
   bool helper(vector<int>&nums,int mid,int m){
        int cs=0;
        int subs=1;
        for(auto it:nums){
            cs+=it;
            if(it>=mid){
                subs++;
                cs=it;
                if(subs>=m)return false;
            }
        }
        return false;
    }
    int splitArray(vector<int>& nums, int m) {
        int start =*max_element(nums.begin(),nums.end());
        int end =accumulate(nums.begin(),nums.end(),0);
        int mid,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(isPossible(nums,mid,m)){
                end=mid-1;
                ans=mid;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
    
    bool isPossible(vector<int>&n,int mid,int m){
        int sum=0,count=1;
        for(int i=0;i<n.size();i++){
            sum+=n[i];
            if(sum>mid){
                sum=n[i];
                count++;
            }
            if(count>m)return 0;
        }
        return 1;
    }
};