class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        map<int,int>mp;
        for(int i=0;i<boxTypes.size();i++){
            mp[boxTypes[i][1]]+=boxTypes[i][0];
        }
      int c=0;
        int units=0;
        
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {   //cout<<"\n"<<it->first<<"--"<<it->second;
            if(c<truckSize)
            {
                if(c+it->second<truckSize)
                {
                    c+=it->second;
                    units+=it->first*it->second;
                }
                else
                {
                    int x=truckSize-c;
                    c+=x;
                    units+=it->first*x;
                }
            }
        }
        return units;
    }
};