class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) { 
        int row = 0;
        int col = 0;
        int mRow = matrix.size()-1;
        int mCol = matrix[0].size()-1;

        vector<int> ans;
        int sum=0;

        while(row<=mRow || col<=mCol)
        {
            for(int j = col; j <= mCol; j++){
                ans.push_back(matrix[row][j]);
            }

            row++;
            if(row>mRow)
            break;

            for(int j = row; j <= mRow; j++){
                ans.push_back(matrix[j][mCol]);
            }

            mCol--;
            if(col > mCol)
            break;

            for(int j = mCol; j >= col; j--){
                ans.push_back(matrix[mRow][j]);
            }

            mRow--;
            if(row > mRow)
            break;

            for(int j = mRow; j >= row; j--){
                ans.push_back(matrix[j][col]);
            }

            col++;
            if(col > mCol)
            break;
        }
        return ans; 
    }
};