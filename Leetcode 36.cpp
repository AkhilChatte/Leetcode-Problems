class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //Checking the repetition in column element
        for(int i=0; i<9; i++){
            vector<bool> flag (9, false);
            for(int j=0; j<9; j++){
                if(board[j][i] != '.'){
                    int digit = board[j][i] - '0';
                    if(flag[digit-1] == false){
                        flag[digit-1] = true;
                    }
                    else{
                        return false;
                    }
                }
            }
        }

        //Checking for repetion in row element
        for(int k=0; k<9; k++){
            vector<bool> flag (9, false);
            for(int l=0; l<9; l++){
                if(board[k][l] != '.'){
                    int digit = board[k][l] - '0';
                    if(flag[digit-1] == false){
                        flag[digit-1] = true;
                    }
                    else{
                        return false;
                    }
                }
            }
        }

        int row;
        int col;
        for(int m=0; m<9; m++){
            switch(m){
                case 0:
                    row = 0;
                    col = 0;
                    break;
                case 1:
                    row = 0;
                    col = 3;
                    break;
                case 2:
                    row = 0;
                    col = 6;
                    break;
                case 3:
                    row = 3;
                    col = 0;
                    break;
                case 4:
                    row = 3;
                    col = 3;
                    break;
                case 5:
                    row = 3;
                    col = 6;
                    break;
                case 6:
                    row = 6;
                    col = 0;
                    break;
                case 7:
                    row = 6;
                    col = 3;
                    break;
                case 8:
                    row = 6;
                    col = 6;
                    break;
            }
            vector<bool> flag (9, false);
            for(int n=row; n<row+3; n++){
                for(int o=col; o<col+3; o++){
                    if(board[n][o] != '.'){
                        int digit = board[n][o] - '0';
                        if(flag[digit-1] == false){
                            flag[digit-1] = true;
                        }
                        else{
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};