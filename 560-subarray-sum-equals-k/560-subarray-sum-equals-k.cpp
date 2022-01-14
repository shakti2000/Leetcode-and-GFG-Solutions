class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==1){
            if(nums[0]==k)return 1;
            else return 0;
        }
        unordered_map<int,int>s;
        int ans=0;
        int psum=0;
        s[0]++;
        for(int i=0;i<nums.size();i++){
            psum+=nums[i];
            int temp=psum-k;
            if(s.find(temp)!=s.end()){
            ans+=s[temp];    }    
            s[psum]++;
        }
    return ans;
    }
};