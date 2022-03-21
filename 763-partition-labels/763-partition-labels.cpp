class Solution {
public:
    bool checker(unordered_set<char>&cc,unordered_map<char,int>&freq){
        for(auto it:cc){
           // cout<<it<<",";
            if(freq[it]!=0)
            {
                //cout<<endl;
                return false;}
        }
       // cout<<"true"<<endl;
        return true;
    }
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>freq;
        for(auto it:s)freq[it]++;
        unordered_set<char>cc;
        int temp=0;
        vector<int>ans;
        for(auto it:s){
           freq[it]--;
            temp++;
            if(freq[it]==0){
                bool a=checker(cc,freq);
                if(a){
                    ans.push_back(temp);
                    cc.clear();
                    temp=0;
                }
            }else{
              //  cout<<freq[it]<<",";
                
                
            }
            if(cc.find(it)==cc.end())cc.insert(it);
        }
    return ans;}
};