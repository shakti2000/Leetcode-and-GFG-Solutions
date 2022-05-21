class Solution {
public:
    void print(vector<int>&nums){
        for(auto it:nums)cout<<it<<',';
        cout<<endl;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int x=*max_element(nums2.begin(),nums2.end());
     //   cout<<x;
        vector<int>helper(x+1);
        stack<int>st;
        st.push(nums2[nums2.size()-1]);
        helper[nums2[nums2.size()-1]]=-1;
        for(int i=nums2.size()-2;i>=0;i--){
            while(st.size()>0 && st.top()<nums2[i]){
                st.pop();
            }
       // print(helper);
            if(st.size()==0)helper[nums2[i]]=-1;
            else helper[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)ans.push_back(helper[nums1[i]]);
       // print(ans);
        return ans;
    }
};