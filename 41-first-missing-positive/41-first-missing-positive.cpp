class Solution {
public:
    int firstMissingPositive(vector<int>& x) {
        unordered_set<int>nums;
        for(auto it:x)nums.insert(it);
        int ele=0;
        int flag=0;
        for(auto it:nums){
            if(it==1)flag=1;
            if(ele<it)ele=it;
        }
        if(ele==0||flag==0)return 1;
        int comp=1;
        cout<<ele<<",";
        for(int i=1;i<=ele;i++){
            if(nums.find(i)==nums.end())return i;
        }
        return ele+1;
       //  for(int i=2;i<=ele;i++)comp=comp^i;
       //  for(auto it:nums){
       //      if(it<=0)continue;
       //      comp=comp^it;
       //  }
       // if(comp==0)return ele+1;
       //      return comp;
    }
};