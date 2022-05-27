class Solution {
public:
    int numberOfSteps(int num) {
        int temp=num;
        int ans=0;
        while(temp>0){
            if(temp%2==0){
                temp/=2;
            }else{
                temp--;
            }
            ans++;
        }
    return ans;}
};