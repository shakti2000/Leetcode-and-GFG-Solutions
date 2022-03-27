class Solution {
public:
    static bool shakti(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second)return a.first<b.first;
        else return a.second<b.second;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>sold;
        for(int i=0;i<mat.size();i++){
            int cs=0;
            for(auto it:mat[i]){
                if(it==1)cs++;
            }
            sold.push_back({i,cs});
        }
        sort(sold.begin(),sold.end(),shakti);
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(sold[i].first);
        }
    return ans;}
};