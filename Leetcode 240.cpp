class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int rIndex = 0;
        int cIndex = c - 1;

        while(cIndex >= 0 && rIndex < r){
            int ele = matrix[rIndex][cIndex];
            if(ele == target){
                return true;
            }
            else if(ele > target){
                cIndex--;
            }
            else{
                rIndex++;
            }
        }
        return false;
    }
};