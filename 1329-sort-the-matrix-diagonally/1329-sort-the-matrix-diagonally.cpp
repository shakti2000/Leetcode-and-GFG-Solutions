class Solution {
public:
    void helper(vector<vector<int>>& mat,vector<int>&temp,int i,int j){
        while(i<mat.size()&&j<mat[0].size()){
//            cout<<i<<","<<j<<";";
            temp.push_back(mat[i][j]);
            i++;j++;
        }
  //      cout<<endl;
    }
    void set(vector<vector<int>>& mat,vector<int>&temp,int i,int j){
        int x=0;
        while(i<mat.size()&&j<mat[0].size()&&x<temp.size()){
            mat[i][j]=temp[x];
          //  cout<<i<<","<<j<<";";
            i++;j++,x++;
        }
        //cout<<endl;
    }
    void print(vector<int>nums){
        for(auto it:nums)cout<<it;
        cout<<endl;
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int i=0;i<mat.size();i++){
            vector<int>temp;
            helper(mat,temp,i,0);
          //  print(temp);
            sort(temp.begin(),temp.end());
            
            set(mat,temp,i,0);
        }
        for(int i=0;i<mat[0].size();i++){
            if(i==0)continue;
            vector<int>temp;
            
            helper(mat,temp,0,i);
            sort(temp.begin(),temp.end());
            set(mat,temp,0,i);
        }
        return mat;
    }
};