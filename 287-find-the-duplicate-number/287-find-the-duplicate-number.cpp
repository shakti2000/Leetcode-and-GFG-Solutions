class Solution {
public:
    int findDuplicate(vector<int>& arr){
        int n = arr.size();
		
		
        // 1 --> piegeonhole principle
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])] < 0) return abs(arr[i]);
            else arr[abs(arr[i])] *= -1; 
        }
        // -----------------------------------------------------------
		
        //2 --> normal sum -- as the test cases are faulty so this approach will give wrong ans
        int sum = 0;
        for(auto it : arr){
            sum += it;
        }
        int tn = n-1;
        int orgSum = (tn * (tn + 1)) / 2;
        int ans = sum - orgSum;
        return ans;
		// ----------------------------------------------------
    }
};