class Solution {
public:
    void print(vector<int>a){
        for(auto it:a)cout<<it;
        cout<<endl;
    }
    int cost(vector<int>x,int startAt, int moveCost, int pushCost) {
        int ans=0;
        if(startAt==x[0])ans+=pushCost;
        else(ans+=moveCost+pushCost);
        int temp=x[0];
        for(int i=1;i<x.size();i++){
            if(x[i]==temp){ans+=pushCost;
                          continue;}
            else{
            ans+=moveCost+pushCost;
                temp=x[i];
            }
        }
        return ans;
    }
    vector<int> inttovec(int a){
        int temp=a;
        vector<int>ans;
        while(temp>0){
            ans.push_back(temp%10);
            temp/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int minCostSetTime(int startAt, int moveCost, int pushCost, int target) {
        int a=0;
        int x=target/60;
        a+=x;
        x--;
        int b=x;
        //if(target%60==0)a--;
        //cout<<a<<","<<b<<endl;
         a*=100;
         b*=100;
       // if(target%60==0)a+=60;
        a+=target%60;
        b+=target%60;
        b+=60;
        if(target<60)b=a;
        if(target%60>39)b=a;
        if(target>=6000)a=b;
        vector<int>va=inttovec(a);
        vector<int>vb=inttovec(b);
        cout<<a<<","<<b<<endl;
       // print(va);
       // print(vb);
        int ca=cost(va,startAt,moveCost, pushCost);
        int cb=cost(vb,startAt,moveCost, pushCost);
        return min(ca,cb);
    }
};