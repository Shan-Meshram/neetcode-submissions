class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> r[9];
        unordered_set<char> c[9];
        unordered_set<char> box[9];

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;

                int b = (i/3)*3 + (j/3);
                int num = board[i][j];
                if(r[i].count(num) || c[j].count(num) || box[b].count(num)){
                    return false;
                }
                r[i].insert(num);
                c[j].insert(num);
                box[b].insert(num);
            }
        }
        return true;
    }
};