class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sws=0;
        int ans=0,j=0;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            sws+=nums[i];
            if(st.find(nums[i])!=st.end()){
                while(1){
                    int x=nums[i];
                    sws-=nums[j];
                    st.erase(nums[j]);
                    if(nums[j]==x){
                        j++;
                        break;
                    }
                    j++;
                }
            }else{
                if(ans<sws){ans=sws;}
            }
            st.insert(nums[i]);
        }
        return ans;
    }
};