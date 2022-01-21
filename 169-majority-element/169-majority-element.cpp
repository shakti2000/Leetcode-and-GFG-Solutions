class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>l;
        for(int i=0;i<nums.size();i++){
            l[nums[i]]++;
        }
        for(auto it:l){
            if(it.second>(nums.size()/2))return it.first;
        }
    return -1;
    }
};