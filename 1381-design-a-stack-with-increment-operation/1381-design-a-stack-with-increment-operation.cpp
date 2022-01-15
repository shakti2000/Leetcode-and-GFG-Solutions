class CustomStack {
public:
    vector<int>s;
    int cs=0;
    int ms;
    CustomStack(int maxSize) {
        ms=maxSize;
    }
    
    void push(int x) {
        if(cs==ms)return;
        s.push_back(x);
        cs++;
    }
    
    int pop() {
        if(cs==0)return -1;
        int temp=s[cs-1];
        s.pop_back();
        cs--;
        return temp;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k&&i<s.size();i++){
            s[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */