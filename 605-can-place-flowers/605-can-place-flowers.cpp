class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
      if(n==0)return true;
        int x=arr.size();
        if(x==1){
            if(arr[0]==0&&n==1)return true;
            else return false;
        }
        int count=0;
        if(arr[0]==0&&arr[1]==0){
            count++;
            arr[0]=1;
        }
        
        //cout<<x;
        for(int i=1;i<x-1;i++){
           if(arr[i]==0&&arr[i+1]==0&&arr[i-1]==0){
               arr[i]=1;
               count++;
               //cout<<i;
           }
       }
        if(arr[arr.size()-1]==0 && arr[arr.size()-2]==0){
            count++;
        }
       // cout<<count<<","<<n;
    if(count>=n)return true;
        else return false;
    }
};