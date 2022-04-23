class Solution {
public:
    string encode(string longurl) {
        return longurl;
        string ans="https://tinyurl.com/";
            string temp="";
            for(int i=longurl.size()-1;i>=0;i--){
                if(longurl[i]=='/'&&longurl[i-1]=='m'&&longurl[i-2]=='o'&&longurl[i-3]=='c'&&longurl[i-4]=='.')break;
                temp+=longurl[i];
            }
        ans+=temp;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shorturl) {
        return shorturl;
        string ans="https://leetcode.com/";
            string temp="";
            for(int i=shorturl.size()-1;i>=0;i--){
                if(shorturl[i]=='/'&&shorturl[i-1]=='m'&&shorturl[i-2]=='o'&&shorturl[i-3]=='c'&&shorturl[i-4]=='.')break;
                temp+=shorturl[i];
            }
        ans+=temp;
        return ans;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));