class Solution {
public:
    int findTheWinner(int n, int k) {
      //int x=n-1;
     list<int>l;
        for(int i=0;i<n;i++){
            l.push_back(i);
        }
        auto it=l.begin();
        while(l.size()>1){
            for(int count=1;count<k;count++){
                it++;
                if(it==l.end()){
                    it=l.begin();
                }}
            it=l.erase(it);
                if(it==l.end()){
                    it=l.begin();
                }
            }
        return 1+*l.begin();
    }
};