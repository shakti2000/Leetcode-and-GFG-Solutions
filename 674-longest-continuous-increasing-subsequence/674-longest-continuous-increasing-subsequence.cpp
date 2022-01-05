class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int best_length = 0;
        int length = 0;
        const int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (i == 0 || nums[i] > nums[i - 1]) {
                length++;
            } else {
                length = 1;
            }
            best_length = std::max(best_length, length);
        }
        return best_length;
    }
};