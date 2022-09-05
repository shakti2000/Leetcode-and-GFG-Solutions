class Solution {
public:
    vector<double>allOperations(double a,double b){
        vector<double>ans;
        ans.push_back(a+b);
        ans.push_back(a-b);
        ans.push_back(b-a);
        ans.push_back(a*b);
        if(abs(b)>FLT_EPSILON){
            ans.push_back(a/b);
        }
        if(abs(a)>FLT_EPSILON){
            ans.push_back(b/a);
        }
        return ans;
    }
    bool helper(vector<double>&arr){
    
        int n=arr.size();
        if(n==1){
         //   cout<<arr[0]<<",";
            return abs(24.0-arr[0])<=FLT_EPSILON;
        }
        for(int fn=0;fn<n;fn++){
            for(int sn=fn;sn<n;sn++){
                if(fn==sn)continue;
                double a=arr[fn];
                double b=arr[sn];
                vector<double>validOperations=allOperations(a,b);
                vector<double>nextArr;
                for(auto it:validOperations){
                    nextArr.clear();
                    nextArr.push_back(it);
                    for(int i=0;i<n;i++){
                        if(i==fn||i==sn)continue;
                        nextArr.push_back(arr[i]);
                    }
                    if(helper(nextArr))return true;
                    
                }
            }
        }
        return false;
    }
    bool judgePoint24(vector<int>& cards) {
        vector<double>arr(cards.begin(),cards.end());
        return helper(arr);
    }
};