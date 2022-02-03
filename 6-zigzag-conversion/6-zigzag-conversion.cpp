class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>v(numRows,"");
        if(numRows == 1)
            return s;
        int row = 0, direction = 1;
        int j=0;
        int i;
        for(int i = 0; i < s.length(); i++)
        {
            v[row] += s[i];
            
            if(row == numRows - 1)
                direction = -1;
            if(row == 0)
                direction = 1;
            
            row += direction;
            
        }     
        string ans="";
        for(int i = 0; i < numRows; i++)
        {
            ans += v[i];
        }
    return ans;}
};