class Solution {
public:
    vector<double> allOperations(double a,double b){
        vector<double>ans;
        ans.push_back(a+b);
        ans.push_back(a-b);
        ans.push_back(a*b);
        ans.push_back(b-a);
        if(abs(a)>0.00000001){
            ans.push_back(b/a);
        }
        if(abs(b)>0.00000001){
            ans.push_back(a/b);
        }
        return ans;
    }
    bool helper(vector<double>nums){
        if(nums.size()==1){
            return abs(24.0-nums[0])<=FLT_EPSILON;
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                double a=nums[i];
                double b=nums[j];
                vector<double>temp=allOperations(a,b);
                for(int x=0;x<temp.size();x++){
                    vector<double>nums1;
                    nums1.push_back(temp[x]);
                    for(int y=0;y<nums.size();y++){
                        if(y==i||y==j)continue;
                        nums1.push_back(nums[y]);
                    }
                    if(helper(nums1))return true;
                }
            }
        }
        return false;
    }
    bool judgePoint24(vector<int>& cards) {
        vector<double>nums(cards.begin(),cards.end());
        return helper(nums);
    }
};