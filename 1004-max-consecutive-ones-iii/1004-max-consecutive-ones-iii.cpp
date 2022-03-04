class Solution {
public:
   int longestOnes(vector<int>& nums, int k) {
        int i = -1, j = 0;     
        int zero = 0, ans = 0;
        int n = nums.size();
        while(j < n){
            if(nums[j] == 0)               
                zero++;
            while(zero > k){
                i++;
                if(nums[i] == 0)       
                    zero--;
            }
           ans = max(ans, j - i);       
           j++;
        }
     return ans;
        
    }
};