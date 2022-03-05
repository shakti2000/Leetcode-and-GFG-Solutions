class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>h;
        map<int,vector<int>>k;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
				// Taking ( i+j ) as map index , push values in vector having same sum
				
                k[i+j].push_back(mat[i][j]);
            }
        }
        for(auto c:k)
        {
            if(c.first%2==0)	
                reverse(c.second.begin(),c.second.end());
            for(auto x : c.second)
                h.push_back(x);
        }
        return h;
            
    }
};