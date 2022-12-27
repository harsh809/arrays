/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowindex = 0;
        int colindex = col-1;
        while(rowindex<row && colindex>=0){
            int temp = matrix[rowindex][colindex];
            if(temp==target){
                return 1;
            }
            else if(temp>target){
                colindex--;
            }
            else{
                rowindex++;
            }
        }
        return 0;
    }
};



