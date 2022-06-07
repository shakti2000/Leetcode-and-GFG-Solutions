class Solution {
public:
   void print(vector<int>nums){
        for(auto it:nums) cout<<it<<",";
        cout<<endl;
    }
    int candy(vector<int>& ratings) {
        vector<int>candies(ratings.size(),1);
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                candies[i]=candies[i-1]+1;
            }
        }
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candies[i]=max(candies[i],candies[i+1]+1);
            }
        }
        //print(candies);
        int ans=accumulate(candies.begin(),candies.end(),0);
        return ans;
    }
};
