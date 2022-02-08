class Solution {
public:
    int digitAdder(int a){
        int ans=0;
        while(a>0){
            ans+=(a%10);
            a/=10;
        }        
        return ans;
    }
    int addDigits(int num) {
        int ans=num;
        while(ans>=10){
            ans=digitAdder(ans);
        }
    return ans;}
};