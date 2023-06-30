class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int c = 0;
        int totalElements = row*col;

        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;

        while(c < totalElements){
            for(int i=startCol; i<=endCol && c<totalElements; i++){
                ans.push_back(matrix[startRow][i]);
                c++;
            }
            startRow++;

            for(int i=startRow; i<=endRow && c<totalElements; i++){
                ans.push_back(matrix[i][endCol]);
                c++;
            }
            endCol--;

            for(int i=endCol; i>=startCol && c<totalElements; i--){
                ans.push_back(matrix[endRow][i]);
                c++;
            }
            endRow--;

            for(int i=endRow; i>=startRow && c<totalElements; i--){
                ans.push_back(matrix[i][startCol]);
                c++;
            }
            startCol++;
        }
        return ans;
    }
};