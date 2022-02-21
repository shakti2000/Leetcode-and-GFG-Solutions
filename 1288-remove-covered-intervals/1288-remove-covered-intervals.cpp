class Solution {
public:
    void print(vector<vector<int>>&x){
        for(auto it:x){
            for(auto i:it){
                cout<<i<<",";
            }
            cout<<endl;
        }
    }
    static bool shakti(vector<int>&a,vector<int>&b){
        if(a[0]!=b[0])return a[0]<b[0];
        else{
            return a[1]>b[1];
        }
    }
    int removeCoveredIntervals(vector<vector<int>>& interval) {
        sort(interval.begin(),interval.end(),shakti);
        //print(interval);
        int start=interval[0][0];
        int end=interval[0][1];
        int ans=1;
        for(int i=0;i<interval.size();i++){
            if(interval[i][0]>=start&&interval[i][1]<=end)continue;
            if(interval[i][0]>end){
                start=interval[i][0];
                end=interval[i][1];
                ans++;
                continue;
                //cout<<"yha ans++"<<ans<<endl;
            }
            if(interval[i][1]>end){
                //cout<<end<<"se";
                end=interval[i][1];
                ans++;
                //cout<<end<<"step"<<i<<"mein"<<endl;
                continue;
            }
        }
    return ans;}
};