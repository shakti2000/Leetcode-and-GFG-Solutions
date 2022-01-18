class Solution {
public:
    void update(vector<int> &arr, int n, int index, int val){
        while(index <= n){
            arr[index] += val;
            index += (index & -index);
        }
    }
    int sum(vector<int> &arr, int index){
        int sum = 0;
        while(index > 0){
            sum += arr[index];
            index -= (index & -index);
        }
        return sum;
    }
    int numTeams(vector<int> &arr) {
        
        int n = arr.size();
        int max_ele = *max_element(arr.begin(), arr.end());
        
        vector<int> right(max_ele +1, 0), left(max_ele +1, 0);
        for(int i=0;i<n;++i)
            update(right, max_ele, arr[i], 1);
        
        int ans = 0, l, r;
        for(int i=0;i<n;++i){
            
            update(right, max_ele, arr[i], -1);
            l = sum(left, arr[i]-1);
            r = sum(right, max_ele) - sum(right, arr[i]);
            
            ans += l*r;
            
            //larget to left
            l = sum(left, max_ele) - sum(left, arr[i]);
            //smaller to right
            r = sum(right, arr[i] -1);
            
            ans += l*r;
            
            update(left, max_ele, arr[i], 1);
        }
        return ans;
    }
};