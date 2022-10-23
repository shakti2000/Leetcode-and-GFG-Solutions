class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // support variables
        int len = nums.size(), tot = 0;
        vector<int> res(2);
        // parsing nums
        for (int n: nums) {
            // normalising n
            n = abs(n);
            // increasing tot
            tot += n;
            // preventing overflow
            if (n == len) n = 0;
            // finding the duplicate or marking numbers as visited
            if (nums[n] < 0) res[0] = n ? n : len;
            else nums[n] *= -1;
        }
        // computing the missing element
        res[1] = (len + 1) * len / 2 - tot + res[0];
        return res;
    }
};