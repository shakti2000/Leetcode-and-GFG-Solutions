class Solution {
public:
    int largestPerimeter(vector<int>& a) {
        sort(a.begin(), a.end(), greater<int>());
        int ans=0;
        int n=a.size();
        for(int i=0;i<n-2;i++)
            if(a[i]<a[i+1]+a[i+2]){
                ans=a[i]+a[i+1]+a[i+2];
                break;

}
        return ans;
            }
    
};