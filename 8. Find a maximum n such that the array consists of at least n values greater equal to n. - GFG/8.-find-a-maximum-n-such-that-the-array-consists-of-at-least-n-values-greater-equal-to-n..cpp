// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int maxValueK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        int index=nums.size()-1;
        int count=0;
        while(n>=0){
           
            if(index>=0){
            if(n==nums[index]){
                while(index>=0&&n==nums[index]){
                    index--;
                    count++;
                }
            }
            } if(n<=count)return n;
            n--;
            
        }
    return 0;}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxValueK(A) << endl;
    }
    return 0;
}  // } Driver Code Ends