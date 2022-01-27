class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ar1=abs((ax1-ax2)*(ay1-ay2));
        int ar2=abs((bx1-bx2)*(by1-by2));
        int ca=0;
        int top=min(by2,ay2);
        int left=max(bx1,ax1);
        int right=min(ax2,bx2);
        int bottom=max(ay1,by1);
        if(top>bottom&&right>left){
            ca=abs((right-left)*(top-bottom));
        }
       // cout<<ar1<<","<<ar2<<","<<ca;
        return ar1+ar2-ca;
    }
};