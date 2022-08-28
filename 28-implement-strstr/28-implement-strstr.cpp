class Solution {
public:
    bool helper(string needle,string haystack,int i){
        for(auto it:needle){
            if(i>=haystack.size())return false;
            if(haystack[i]!=it)return false;
            i++;
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                if(helper(needle,haystack,i))return i;
            }
        }
        return -1;
    }
};