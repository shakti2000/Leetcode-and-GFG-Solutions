class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> comp;
        int n = nums.size();
        if(n<3){
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]+nums[n-1]+nums[n-2]<0){
                continue;
            }
            if(nums[i]>=1)break;
           if(i>0 && nums[i]==nums[i-1])
               continue;
            int rem = -1*nums[i];
            int p1 = i+1, p2 = n-1;
            while(p1<p2){
                if(nums[p1]+nums[p2]<rem){
                    p1++;
                }else if(nums[p1]+nums[p2]>rem){
                    p2--;
                }else{
                    
                    comp.push_back(nums[p1]);
                    comp.push_back(nums[p2]);
                    comp.push_back(nums[i]);
                    ans.push_back(comp);
                    comp.clear();
                    if(nums[p1]==nums[p2])
                        break;
                    else{
                        int x = nums[p1],y= nums[p2];
                        while(x==nums[p1])
                        {
                            p1++;
                        }
                        while(y==nums[p2]){
                            p2--;
                        }
                    }
                }
            }
        }
     return ans;   
    }
};