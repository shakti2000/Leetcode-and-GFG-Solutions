class Solution {
public:
    int maximumScore(int a, int b, int c) {
    int max = 0, min_sum = 0;
    if(a >= b && a >= c)
        max = a, min_sum = b + c;
    else if(b >= a && b >= c)
        max = b, min_sum = a + c;
    else
        max = c, min_sum = a + b;
    
    if(min_sum <= max)
        return min_sum;
    
    return max + (min_sum - max) / 2;

    }
};