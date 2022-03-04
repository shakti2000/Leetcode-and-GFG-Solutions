class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxl=0;
        int cl=0;
        for(auto it:nums){
            if(it==1){
                cl++;
                if(cl>maxl)maxl=cl;
            }else{
                cl=0;
            }
                
        }
   return maxl; }
};