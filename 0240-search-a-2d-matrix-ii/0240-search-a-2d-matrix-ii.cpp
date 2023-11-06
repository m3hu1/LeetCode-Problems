// m3hu1
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowindex = 0;
        int colindex = col - 1;
        while(rowindex < row && colindex>=0)
        {
         int value = matrix[rowindex][colindex];
         if(value < target){
            rowindex++; //index of row incriment
         }
          else if(value > target){
            colindex--; // index of col decriment
         }
         else{ 
             return 1;
         }
        }
        return 0;
    }
};