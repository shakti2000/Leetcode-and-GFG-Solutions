class Solution {
public:
    int lastRemaining(int n) {
        if (n == 1) return 1; 
        if (n&1) --n; 
        return n+2-2*lastRemaining(n >> 1); 
    }
};