class Solution {
public:
	int findPairs(vector<int>& nums, int k) {
		unordered_map<int, int> m;
		for(auto num : nums)
			m[num]++;
		int ans=0;
		for(auto i : m){
			int num1 = i.first, num2 = num1-k;
			if(num1 == num2 and m[num1] > 1)
				++ans;
			else if(num1 != num2 and m.find(num2) != m.end())
				++ans;
		}
		return ans;
	}
};