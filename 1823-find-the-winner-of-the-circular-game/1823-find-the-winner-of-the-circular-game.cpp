class Solution {
public:
    int findTheWinner(int n, int k) {
        list<int>l;
        for(int i=0;i<n;i++){
            l.push_back(i);
        }
        auto it=l.begin();
        while(l.size()>1){
            for(int i=1;i<k;i++){
                it++;
                if(it==l.end())it=l.begin();
            }
            it=l.erase(it);
            if(it==l.end())it=l.begin();
        }
    return 1+*l.begin();
    }
};