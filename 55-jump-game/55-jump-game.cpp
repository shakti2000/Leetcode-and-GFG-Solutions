class Solution {
  public:
    bool canJump(vector < int > & nums) {
      int maxDistance = 0;
      for (int index = 0; index < nums.size() && maxDistance < nums.size() - 1; index++) {
        if (index > maxDistance) return false;
        maxDistance = max(maxDistance, index + nums[index]);
      }
      return true;
    }
};