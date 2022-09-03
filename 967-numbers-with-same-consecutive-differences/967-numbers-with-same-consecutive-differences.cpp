class Solution {
public:
    int numb(vector<int>nums){
        
        long long ans=0;
        for(auto it:nums){
            ans+=it;
            ans*=10;
        }
        ans/=10;
        return ans;
    }
    void helper(vector<int>number,vector<int>&ans,int i,int k,int n){
        if(i==n){
            ans.push_back(numb(number));
            return ;
        }
        if(number[i-1]+k<10){
            number.push_back(number[i-1]+k);
            helper(number,ans,i+1,k,n);
            number.pop_back();
        }
        if(number[i-1]-k>=0){
            number.push_back(number[i-1]-k);
            helper(number,ans,i+1,k,n);
            number.pop_back();
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>ans;
        vector<int>number;
        for(int i=1;i<=9;i++){
            number.push_back(i);
            helper(number,ans,1,k,n);
            number.pop_back();
        }
        set<int>temp;
        for(auto it:ans)temp.insert(it);
        vector<int>result;
        for(auto it:temp)result.push_back(it);
        return result;
    }
};