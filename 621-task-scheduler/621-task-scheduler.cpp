class Solution {
public:
   int leastInterval(vector<char>& tasks, int n) {
    unordered_map<char,int> ele;
    for(auto a:tasks) ++ele[a];
    priority_queue<int> fre;
    for(auto a:ele) fre.push(a.second);
    queue<pair<int,int>> next;
    int time = 0;
    while(fre.size() or next.size()){
        ++time;
        if(next.size() and time==next.front().first){
            fre.push(next.front().second);
            next.pop();
        }
        if(fre.size()){
            if(fre.top()>1) next.push({time+n+1,fre.top()-1});
            fre.pop();
        }
    }
    return time;
}
};