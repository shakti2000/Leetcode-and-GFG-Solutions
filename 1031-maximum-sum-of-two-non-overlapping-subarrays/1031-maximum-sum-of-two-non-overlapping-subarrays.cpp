class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int n = nums.size() , arr1[n-firstLen+1] , arr2[n-secondLen+1] , sum = 0;
        for(int i = 0 ; i < firstLen ; i++)sum += nums[i];
        arr1[0]=sum;sum = 0;
        for(int i = 1 ; i <= n - firstLen ; i++)
            arr1[i] = -nums[i-1] + nums[firstLen+i-1] + arr1[i-1];
        
        for(int i = 0 ; i < secondLen ; i++)sum += nums[i];
        arr2[0]=sum;sum = 0;
        for(int i = 1 ; i <= n - secondLen ; i++)
            arr2[i] = -nums[i-1] + nums[secondLen+i-1] + arr2[i-1];
        
        int ans = 0;
        for(int i = 0 ; i <= n-firstLen-secondLen ; i++)
        {
//             Here i indicates the indx from where firstLen length subaaray
            for(int j = i+firstLen ; j <= n-secondLen ; j++)
                ans = max(ans , arr1[i] + arr2[j]);
            
            for(int j = i+secondLen ; j <= n-firstLen ; j++)
                ans = max(ans , arr2[i] + arr1[j]);
        }
        return ans;
    }
};