class Solution {
public:
    int minMove(int target, int maxDoubles, int moves) {
        int ans = 0;
        while(target > 1) {
            
            if(maxDoubles > 0 && (target/2) >= 1 && target%2 == 0) {
                target = target/2 + target%2;
                maxDoubles--;
                ans++;
            }
            else if(maxDoubles == 0) {
                ans += target-1;
                break;
            }
            else
            {
                target--;
                ans++;
            }
        }
        return ans;
    }
    
    int minMoves(int target, int maxDoubles) {
        return minMove(target,maxDoubles,0);
    }
};