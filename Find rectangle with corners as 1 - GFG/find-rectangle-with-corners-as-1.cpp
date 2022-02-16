// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map>
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
   bool ValidCorner(const vector<vector<int> >& a){
        int n = a.size();
        int m = a[0].size();
        for(int k=1;k<=max(n,m);k++){
            for(int l=1;l<=max(n,m);l++){
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(i+k<n and j+l<m)   {
                            if(a[i][j]and a[i+k][j] and a[i][j+l] and a[i+k][j+l]){
                                return true;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int row, col;
        cin>> row>> col;

        vector<vector<int> > matrix(row);
            
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        if (ob.ValidCorner(matrix)) 
            cout << "Yes\n"; 
        else
            cout << "No\n"; 
    }

    return 0;
} 


  // } Driver Code Ends