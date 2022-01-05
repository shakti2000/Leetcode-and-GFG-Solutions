class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        // Step 1
		int count=1, max=1;
        for (int i=1; i<nums.size(); i++) {
            // Step 2
			if (nums[i] <= nums[i-1])
                count=0;
            // Step 3
			count++;
            // Step 4
			if (count>max)
                max=count;
        }
        // Step 5
		return max;
    }
};