class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        
        int sum = 0;
        
        sum = accumulate(nums.begin(),nums.end(),sum);
        
        int l = 0,r = sum;
        
        
        auto predicate = [&](int candSum)
        {
            int v = 0;
            
            int count = 0;
            for(int i = 0;i<nums.size();i++)
            {
                if(nums[i]>candSum) return false;
                v+=nums[i];
                if(v>=candSum)
                {
                    count++;
                    if(v == candSum) v = 0;
                    else v = nums[i];
                }
            }
            if(v!=0) count++;
            return count<=m;
        };
        while(r-l>1)
        {
            int mid = l+(r-l)/2;
            
            if(predicate(mid)) r = mid;
            else l = mid+1;
        }
        
        if(predicate(l)) return l;
        return r;
        
    }
};