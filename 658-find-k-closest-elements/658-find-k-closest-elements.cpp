class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        priority_queue<pair<int,int>> maxH;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            maxH.push({abs(arr[i]-x),arr[i]});
            if(maxH.size()>k)   maxH.pop();
        }
        while(!maxH.empty())
        {
            ans.push_back(maxH.top().second);
            maxH.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};