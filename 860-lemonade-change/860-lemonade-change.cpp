class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int ,int>galla;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                galla[bills[i]]++;
                continue;
            }
            if((bills[i])==10){
                if((galla[5])!=0){
                    galla[bills[i]]++;
                    galla[5]--;
                    continue;
                }else{
                    return false;
                }
            }
            if(bills[i]==20){
                if(galla[5]!=0&& galla[10]!=0){
                    galla[5]--;
                    galla[10]--;
                    continue;
                }else{
                    if(galla[10]==0 && galla[5]>=3){
                        galla[5]-=3;
                        continue;
                    }else{
                        return false;
                    }
                }
            }
        }
    return true;
    }
};