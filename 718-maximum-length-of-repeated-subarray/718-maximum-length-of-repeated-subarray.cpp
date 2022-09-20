class Solution {
public:
    int helper(int i,int j,vector<int>& nums1, vector<int>& nums2){
        int length=0;
        while(i<nums1.size()&&j<nums2.size()&&nums1[i]==nums2[j]){
            length++;
            i++;j++;
        }
        return length;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        for(int i=0;i<nums1.size();i++){
            if((nums1.size()-i)<ans)break;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    int temp=helper(i,j,nums1,nums2);
                    if(temp>ans)ans=temp;
                }
            }
        }
        return ans;
    }
};