void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
class Solution {
public:
    
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        fastIO();
        long long ax1,ay1,ax2,ay2,bx1,by1,bx2,by2;
        ax1=rec1[0];
        ay1=rec1[1];
        ax2=rec1[2];
        ay2=rec1[3];
        bx1=rec2[0];
        by1=rec2[1];
        bx2=rec2[2];
        by2=rec2[3];
         int top=min(by2,ay2);
        int left=max(bx1,ax1);
        int right=min(ax2,bx2);
        int bottom=max(ay1,by1);
       //int ca=0;
        if(top>bottom&&right>left){
           return true;
        }
        else return false;
    }
};