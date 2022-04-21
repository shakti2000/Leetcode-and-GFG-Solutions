 vector<int>has(1000001,-1);
class MyHashSet {
public:
   
    MyHashSet() {
        for(auto &it:has)it=-1;
    }
    
    void add(int key) {
        has[key]=key;
    }
    
    void remove(int key) {
        has[key]=-1;
    }
    
    bool contains(int key) {
       // cout<<has[key]<<","<<endl;
        if(has[key]==-1)return false;
        else return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */