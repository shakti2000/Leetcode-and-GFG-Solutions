class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int>pop;
        for(int i=0;i<logs.size();i++){
            pop[logs[i][0]]++;
            pop[logs[i][1]]--;
        }
        int ma=INT_MIN;
        int yr;
        int cp=0;
        for(auto it=pop.begin();it!=pop.end();it++){
            cp+=it->second;
            if(cp>ma){
                ma=cp;
                yr=it->first;}
        }
    return yr;
    }
};