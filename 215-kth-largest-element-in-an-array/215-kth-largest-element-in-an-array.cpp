class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        //create a max heap
        priority_queue<int, vector<int>> q;
        //nlog(k)
        for (auto& i : nums){
            q.push(i);
        }
        
        int n = 1;
        while (n<k){
            q.pop();
            n++;
        }
                
        return q.top();
    }
};