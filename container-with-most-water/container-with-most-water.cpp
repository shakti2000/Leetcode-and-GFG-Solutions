class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxw=0;
        int start=0;
        int water=0;
        int end=height.size()-1;
        while(start<=end){
                if(height[start]>height[end]){
                    water=height[end]*(end-start);
                    end--;
                }else{
                    water=height[start]*(end-start);
                start++;
                }
                maxw=max(water,maxw);
            }
        return maxw;
    }
};