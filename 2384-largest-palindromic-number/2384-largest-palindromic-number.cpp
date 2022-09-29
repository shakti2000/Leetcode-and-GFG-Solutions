class Solution {
public:
    string largestPalindromic(string s) {
        map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        string ans="";
        int flag=0;
        vector<char>temp;
        char x;
        for(auto it:mp){
            if(it.second%2!=0){
                flag=1;
                x=it.first;
            }
            int times=it.second/2;
            while(times--)temp.push_back(it.first);
        }
        if(temp.size()==0){
            if(flag==1){
                ans+=x;
            }
                return ans;
        }
        if(temp.size()>0){
        reverse(temp.begin(),temp.end());
        if(temp[0]=='0'&&temp[temp.size()-1]=='0'){
            if(flag==1){
                ans+=x;
            }else{
                ans+='0';
            }
                return ans;
        }
        for(auto it:temp){
            ans+=it;
        }
        if(flag==1){
           ans+=x;
        }
        reverse(temp.begin(),temp.end());
        for(auto it:temp){
            ans+=it;
        }
        return ans;
    }
        return ans;
    }
};