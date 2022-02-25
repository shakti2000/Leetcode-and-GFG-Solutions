class Solution {
public:
    void print(unordered_set<int>s){
        for(auto it:s){
            cout<<it<<",";
        }
        cout<<endl;
    }
    bool canMeasureWater(int j1, int j2, int target) {
        if(j1+j2<target)return false;
        unordered_set<int>caps;
        queue<int>q;
        q.push(0);
        vector<int>temp={j1,j2,-j1,-j2};
       // cout<<q.front();
        while(q.size()!=0){
            int currcap=q.front();
           // cout<<currcap<<endl;
            q.pop();
            for(auto it:temp ){
                int newcap=currcap+it;
                //cout<<newcap<<",";
                if((newcap<0)||(newcap>(j1+j2)))continue;
                if(caps.find(newcap)==caps.end()){
                    if(newcap==target)return true;
                    q.push(newcap);
                    caps.insert(newcap);
                }
            }
           // cout<<endl;
        }
       // print(caps);
      return false;  
    }
};