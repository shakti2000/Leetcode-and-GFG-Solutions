class Solution {
public:
    double champagneTower(int p, int r, int g) {
        double q=p;
        vector<vector<double>> v(101,vector<double> (101, 0.0));
        v[0][0]=q;
        for(int i=0;i<100;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if(v[i][j]>=1)
                {
                    v[i+1][j]+=(v[i][j]-1)/2.0;
                    v[i+1][j+1]+=(v[i][j]-1)/2.0;
                    v[i][j]=1.0;
                }
            }
        }
        return v[r][g];
    }
};