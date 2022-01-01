class Solution {
public:
    int findPeakElement(vector<int>& a) {
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>a[i+1]){
                return i;
            }
        }
        return a.size()-1;
    }
};