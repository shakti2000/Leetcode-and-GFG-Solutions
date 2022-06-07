class Solution {
public:
    void print(vector<int>nums){
        for(auto it:nums)cout<<it<<",";
        cout<<endl;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)return ;
        if(m==0){
            nums1=nums2;
            return ;
        }
       // print(nums2);
        int x=n+m;
        x--;
        n--;
        m--;
        while(n>=0&&x>=0){
            
              // cout<<m<<","<<n<<endl;
            if(m>=0){
            if(nums1[m]>nums2[n]){
             //   cout<<nums1[m]<<">"<<nums2[n]<<endl;
                swap(nums1[m--],nums1[x--]);
            }else{
              //  cout<<nums1[m]<<"<"<<nums2[n]<<endl;
                nums1[x--]=nums2[n--];
            }}else{
                nums1[x--]=nums2[n--];
            }
            
          //  print(nums1);
        }
    }
};