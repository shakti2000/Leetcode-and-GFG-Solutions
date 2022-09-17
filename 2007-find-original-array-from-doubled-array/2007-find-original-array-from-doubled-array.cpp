class Solution {
public:
    bool helper(vector<int>& ans,vector<int>& changed){
        int i=0;
        int j=changed.size()/2;
     //   cout<<i<<","<<j;
       unordered_map<int,int>mp;
        unordered_map<int,int>required;
        
        for(auto it:changed){
            if(required[it]!=0){
                required[it]--;
            }else{
                required[it*2]++;
                ans.push_back(it);
            }
        }
        for(auto it:required){
            if(it.second!=0)return false;
        }
        return true;
    }
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        if(changed.size()%2!=0)return ans;
        sort(changed.begin(),changed.end());
        vector<int>temp;
        if(helper(ans,changed)==true)return ans;
        else return temp;
    }
};