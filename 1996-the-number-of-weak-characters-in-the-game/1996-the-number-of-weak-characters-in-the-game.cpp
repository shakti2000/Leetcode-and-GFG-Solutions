class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[0]!=b[0])return a[0]<b[0];
        else return a[1]>b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),cmp);
        int answer=0;
        int mtn=INT_MIN;
        for(int i = properties.size()-1; i>=0; i--){
        if(mtn > properties[i][1]){
            answer++;
        }else{
            mtn = max(mtn,properties[i][1]);
        }
    }
    return answer;
    }
};