class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>freq;
        vector<string>ans;
        string x=s.substr(0,10);
        //cout<<x;
        freq[x]++;
        for(int i=10;i<s.length();i++){
            string x=s.substr((i-9),10);
           cout<<x<<endl;
            //cout<<freq[x]<<",";
            freq[x]++;           
            
                if(freq[x]==2)
                ans.push_back(x);
        }
        
        return ans;
    }
};