class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int x=nums.size();
        stack<int>st;
        for(auto i=0;i<x;i++){
            nums.push_back(nums[i]);
        }
        vector<int>temp(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            while(st.size()>0&&nums[i]>=st.top())st.pop();
            if(st.size()==0)temp[i]=-1;
            else temp[i]=st.top();
            st.push(nums[i]);
        }
        vector<int>ans;
        for(int i=0;i<x;i++){
            ans.push_back(temp[i]);
        }
        return ans;
    }
};