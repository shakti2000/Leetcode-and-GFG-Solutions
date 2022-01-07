class Solution {
public:
    int maximum69Number (int num) {
       // if(num%9==0)return num;
        int i=0;
        int lo=0;
        int c=0;
        int temp=num;
        while(temp>0){
            int x=temp%10;
            if(x==6){
                lo=i;
                c=1;
            }
            temp=temp/10;
            i++;
        }
       // cout<<lo<<","<<x<<endl;
        
        if(c==1){
        int add=3*pow(10,lo);
        num+=add;
        }
        return num;
        
    }
};