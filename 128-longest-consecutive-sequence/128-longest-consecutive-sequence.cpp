class Solution {
public:
    int longestConsecutive(vector<int>& num) {
        
        if(num.size()==0)return 0;
        if(num.size()==1)return 1;
        set<int>st;
        for(auto it:num)st.insert(it);
        vector<int>nums;
        for(auto it:st)nums.push_back(it);
        sort(nums.begin(),nums.end());
        int ans=1;
        for(int i=1;i<nums.size();i++){
         int cs=1;
            while(i<nums.size()){
                if(nums[i-1]+1==nums[i]){
                    cs++;
                    if(cs>ans)ans=cs;
                    i++;
                }else{
                    break;
                }
            }
        }
        return ans;
    }
};