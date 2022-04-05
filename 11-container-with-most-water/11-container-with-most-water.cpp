class Solution {
public:
    int maxArea(vector<int>& height) {
        int answ=0;
        int i=0,ansi;
        
        int j=height.size()-1,ansj;
        while(i<j){
            int temp=(j-i)*min(height[i],height[j]);
            if(temp>answ){
                answ=temp;
            }
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        
        return answ;}
};