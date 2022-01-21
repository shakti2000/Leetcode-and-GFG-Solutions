class Solution {
public:
        long long mod = 1e9 + 7;
    
    int reverse(int n)
    {
        int rev = 0;
        
        while(n > 0)
        {
            rev = rev * 10 + n % 10;
            n = n / 10;
        }
        
        return rev;
    }
    
    int countNicePairs(vector<int>& arr) {
        
        int n = arr.size();
        
        int count = 0;
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++)
        {
            int x = arr[i] - reverse(arr[i]);
            
            if(mp.count(x))
            {
                count = (count % mod + (mp[x]) % mod) % mod;
            }   
            mp[x]++;
        }   
        return count++;
    }
};