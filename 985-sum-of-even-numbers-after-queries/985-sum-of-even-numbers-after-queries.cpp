class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)sum+=nums[i];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int index=queries[i][1];
            int val=queries[i][0];
            if(nums[index]%2==0){
                if(val%2==0){
                    nums[index]+=val;
                    sum+=val;
                    ans.push_back(sum);
                    continue;
                }else{
                    sum-=nums[index];
                    nums[index]+=val;
                    ans.push_back(sum);
                    continue;
                }
            }else{
                if(val%2==0){
                    nums[index]+=val;
                    ans.push_back(sum);
                    continue;
                }else{
                    nums[index]+=val;
                    sum+=nums[index];
                    ans.push_back(sum);
                    continue;
                }
                
            }
        }
        return ans;
    }
};