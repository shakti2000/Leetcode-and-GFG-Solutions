class Solution {
public:
    int nthUglyNumber(int n) {
        int ar[n];
        ar[0]=1;        
       int a=0,b=0,c=0,i=1;
        while(i<n)
        {
            ar[i]=min({ar[a]*2,ar[b]*3,ar[c]*5});
            if(ar[i]==ar[a]*2)
                a++;
         if(ar[i]==ar[b]*3)
                b++;
          if(ar[i]==ar[c]*5)
                c++;
            i++;
        }
        return ar[n-1];
    }
};