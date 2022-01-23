class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int sz = log10(low); //to find number of digits
        int sz2 = ceil(log10(high));
        
        for(;sz<=sz2;sz++)
        {   
            for(int st = 1;st<10;st++)
            {
                int temp = sz;
                int num = 0;
                int dum = st;
                while(temp--)
                {
                    if(dum>9)
                    {
                        num = INT_MAX;
                        break;
                    }
                    num = num*10 + dum;
                    dum++;
                }
                if(num<low)
                    continue;
                if(num>high)
                    break;
                ans.push_back(num);
            }
        }
        return ans;
    }
};