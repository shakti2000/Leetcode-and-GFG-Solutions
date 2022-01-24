class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int noOfElements = row*col;
    
    int visitedElements = 0;
    
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    
    while(visitedElements < noOfElements){
        
        // printing startingRow
        for(int i = startingCol; visitedElements < noOfElements && i<=endingCol; i++){
            ans.push_back(matrix[startingRow][i]);
            visitedElements++;
        }
        startingRow++;

        for(int i = startingRow; visitedElements < noOfElements && i<=endingRow; i++){
            ans.push_back(matrix[i][endingCol]);
            visitedElements++;
        }
        endingCol--;

        
     
        for(int i = endingCol; visitedElements < noOfElements && i>=startingCol; i--){
            ans.push_back(matrix[endingRow][i]);
            visitedElements++;
        }
        endingRow--;
        
        
        
        for(int i = endingRow; visitedElements < noOfElements && i>=startingRow; i--){
            ans.push_back(matrix[i][startingCol]);
            visitedElements++;
        }
        startingCol++;
           
    }
    return ans;
}
    
};