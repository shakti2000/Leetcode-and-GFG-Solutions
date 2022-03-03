class Solution {
public:
    void print(vector<int>s){
        for(auto it:s)cout<<it<<",";
        cout<<endl;
    }
    bool ac(int a,int b,int c){
        return a-b==b-c;
    }
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)return 0;
        vector<int>tempv;
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            if(ac(nums[i],nums[i+1],nums[i+2])){
                int temp=1;
                int j=i+2;
                int d=nums[i+1]-nums[i];
                while(j+1<nums.size()&&(nums[j+1]-nums[j]==d)){
                    temp++;
                    j++;
                }
                tempv.push_back(temp);
            i=j-1;
            }
            
        }
       // print(tempv);
        for(auto it:tempv){
            ans+=( it * (it + 1) / 2);
        }
    return ans;}
};