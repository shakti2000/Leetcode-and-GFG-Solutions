class Solution {
public:
    int pivotfinder(vector<int>&nums,int s,int e){
        if(s==e)return 0;
        int mid=s+ ((e-s)/2);
        cout<<mid<<",";
        //if(s>e)return INT_MAX;
        if(mid==0&&(nums[mid]<nums[mid+1]))return 0;
        if(nums[mid]>nums[mid+1])return mid+1;
        if(nums[mid]<nums[e])e=mid;
        else s=mid+1;
        return pivotfinder(nums,s,e);
    }
     int Bsearch(vector<int> &nums,int target,int l,int r){
        if(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                return Bsearch(nums,target,l,mid-1);
            else
                return Bsearch(nums,target,mid+1,r);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int  pivot=pivotfinder(nums,s,e);
        cout<<endl;
        cout<<"pivot"<<pivot;
        if (nums[pivot] == target)
        return pivot;
    if (nums[0] <= target&&pivot!=0)
        return Bsearch(nums,target, 0, pivot - 1);
    return Bsearch(nums, target,pivot + 1, e);

    }    
};