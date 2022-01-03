class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int>s;
            int n=nums.size();
        for(int i=0;i<nums.size();i++){
                if(s.find(nums[i])!=s.end()){
                    s.erase(nums[i]);
                }else{
                    s.insert(nums[i]);
                }
                }
        vector<int>ans;
       unordered_set<int> :: iterator itr=s.begin();
        
        ans.push_back(*itr);
        itr++;
        ans.push_back(*itr);
        return ans;
    }
};