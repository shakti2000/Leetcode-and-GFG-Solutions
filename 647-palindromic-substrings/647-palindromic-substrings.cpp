class Solution {
public:
    int countSubstrings(string s) {
        vector<vector<int>>dp(s.length(),vector<int>(s.length(),-1));
        int ans=0;
        for(int i=0;i<s.length();i++){
            dp[i][i]=1;
                ans++;}
        for(int i=s.length()-1;i>=0;i--){
            for(int j=i+1;j<s.length();j++){
                if((j-i<=2||dp[i+1][j-1]==1)&&s[i]==s[j]){
                    ans++;
                    dp[i][j]=1;
                }
            }
        }
    return ans;
    }
};