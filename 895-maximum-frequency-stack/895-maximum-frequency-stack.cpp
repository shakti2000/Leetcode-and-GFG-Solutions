struct Node{
    int val;
    int time;
    int freq;
    Node(){}
    Node(int _val, int _time, int _freq){
        val=_val;
        time=_time;
        freq=_freq;
    }

    
};
struct cmp{
    bool operator () (const Node& lhs,const Node&rhs)const {
        // Default big root heap, so we can sort by frequency from small to large and time stamp from small to large
        return lhs.freq==rhs.freq?lhs.time<rhs.time:lhs.freq<rhs.freq;
    }
};
class FreqStack {
public:
    
    unordered_map<int,int> v2f;

    priority_queue<Node,vector<Node>,cmp>pq;
    int global_time=0;

    FreqStack() {
    }
    
    void push(int val) {
        int f;
        if(v2f.count(val)){
            // If it already exists, the frequency of the new node is + 1
            f = ++v2f[val];
        }else{
            f=1;
            v2f[val]=1;
        }
        Node n(val,global_time++,f);
        pq.push(n);
    }
    
    int pop() {
        if(pq.empty()){
            return -1;
        }
        Node n=pq.top();
        pq.pop();
        // Update hash table
        v2f[n.val]--;
        if(!v2f[n.val])
        {
            v2f.erase(n.val);
        }
        return n.val;
    }
};