class Solution {
public:
    vector<int> countBits(int n) {
        vector arr(n + 1 , 0);
        for(int i = 0; i <= n; i++)
        arr[i] = arr[i/2] + i%2;    
    
    return arr;
    }
};