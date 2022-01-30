class Solution {
public:
    vector<string> ans;
    void solve(string arr , string curr , int n , map<int,int> mp){
        if(n==0){
            ans.push_back(curr);
            return;
        }
        char temp = arr[n-1];
        int x = (int) temp;
        x -= 48;
        int m = mp[x];
        char temp1 = (char)(m);
        char temp2 = (char)(m+1);
        char temp3 = (char)(m+2);
        solve(arr , curr+temp1 , n-1 , mp);
        solve(arr , curr+temp2 , n-1 , mp);
        solve(arr , curr+temp3 , n-1 , mp);
        if(x==7 or x==9){
            char temp4 = (char)(m+3);
            solve(arr , curr+temp4 , n-1 , mp);
        }
        return;
    }
    vector<string> letterCombinations(string arr) {
        int n = arr.size();
        if(n==0){
            return ans;
        }
        
        map<int,int>mp;
        int temp = 97;
        for(int i=2 ; i<=6 ; i++){
            mp.insert({i,temp});
            temp += 3;
        }
        mp.insert({7,112});
        mp.insert({8,116});
        mp.insert({9 ,119});
    
        solve(arr ,""  , n , mp);
        for(int i=0 ; i<ans.size() ; i++){
            reverse(ans[i].begin() , ans[i].end());
        }
        return ans;
    }
};