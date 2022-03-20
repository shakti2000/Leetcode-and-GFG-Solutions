class Solution {
public:
    bool solver(int &ans,vector<int>&nums,vector<int>&tops,int a){
        int temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a)continue;
            else{
                if(tops[i]==a)temp++;
                else {ans=INT_MAX;return false;}
            }
        }ans=temp;
        return true;
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int a=tops[0];
        int b=bottoms[0];
        int ans1,ans2,ans3,ans4;
        bool c1,c2,c3,c4;
        c1=solver(ans1,tops,bottoms,a);
        c2=solver(ans2,tops,bottoms,b);
        c3=solver(ans3,bottoms,tops,a);
        c4=solver(ans4,bottoms,tops,b);
        if(!c1&&!c2&&!c3&&!c4)return -1;
        int ans=INT_MAX;
        if(c1){
            ans=min(ans,ans1);
        }
        if(c2){
            ans=min(ans,ans2);
        }if(c3){
            ans=min(ans,ans3);
        }if(c4){
            ans=min(ans,ans4);
        }
        return ans;
    }
};