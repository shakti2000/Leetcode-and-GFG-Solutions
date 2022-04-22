    vector<pair<int,int>>mp(1000001,{0,-1});
class MyHashMap {
public:
    MyHashMap() {
        for(auto &it:mp){
            it.second=-1;
        }
    }
    
    void put(int key, int value) {
        mp[key].first=key;
        mp[key].second=value;
    }
    
    int get(int key) {
        
        return mp[key].second;
    }
    
    void remove(int key) {
        mp[key].second=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */