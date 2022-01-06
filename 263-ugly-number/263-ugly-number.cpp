class Solution {
public:
    bool isUgly(int n) {
        if(n==0)return false;
        if(n==1)return true;
        int temp=n;
        if(temp<0)return false;
        while(temp>1){
            if(temp%2==0){
                temp=temp/2;
                 continue;
            }else if(temp%3==0){
                temp=temp/3;
                continue;
            }else if(temp%5==0){
                temp=temp/5;
                continue;
            }else{
                return false;
            }
        }
    return true;}
};