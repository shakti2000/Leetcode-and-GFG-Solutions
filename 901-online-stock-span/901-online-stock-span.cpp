class StockSpanner {
public:
    stack<int>st;
    int i=0;
    map<int,int>mp;
    StockSpanner() {
        while(st.size())st.pop();
        i=0;
    }
    
    int next(int price) {
        mp[i]=price;
        if(st.size()){
       // cout<<i<<","<<mp[st.top()]<<","<<price<<endl;
        }
        while(st.size()>0 && mp[st.top()]<=price){
            st.pop();
        }
     //   cout<<st.size()<<","<<mp.size()<<endl;
        if(st.size()==0){
            st.push(i);
         i++;
            return i;
        }else{
            int k=st.top();
            st.push(i);
            i++;
            return i-k-1;
        }
        return 0;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */