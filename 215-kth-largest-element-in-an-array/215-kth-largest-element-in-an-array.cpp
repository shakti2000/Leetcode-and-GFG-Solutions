class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     priority_queue<int,vector<int>,greater<int>>s;
        for(int i=0;i<nums.size();i++){
            s.push(nums[i]);
            if(s.size()>k)s.pop();
            
        }
    return s.top();
    }
};