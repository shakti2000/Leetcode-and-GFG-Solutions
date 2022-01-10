class Solution {
    double helper(double x,int n){
        if(n==0){return 1;}
        else if(n==1){return x;}
        else{
            double ans = helper(x,n/2);
            if(n%2 == 0){
                return ans*ans;
            }
            else{
                return x*ans*ans;
            }
        }
    }
public:
    double myPow(double x, int n) {
        double ans = helper(x,n);
        if(n>=0){
            return ans;
        }else{
            return 1/ans;
        }
    }
};