class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> col_arr(9);
        vector<unordered_set<int>> square_arr(9);
        unordered_set<int> col;
        unordered_set<int> square;

        int n = 9;
        for (int i = 0; i < n; i++) {
            unordered_set<int> row;
            for (int j = 0; j < n; j++) {
                // i row number, j col number
                char cur = board[i][j];
                if (cur == '.') {
                    // ignore .
                    continue; 
                }
            
                if (row.contains(cur)) {
                    return false;
                }

                if (col_arr[j].contains(cur)) {
                    return false;
                }

                int row_floor = i / 3;
                int col_floor = j / 3;
                int sq_idx = row_floor * 3 + col_floor;
                if (square_arr[sq_idx].contains(cur)) {
                    return false;
                }
                square_arr[sq_idx].insert(cur);
                row.insert(cur);
                col_arr[j].insert(cur);
            }
        }

        return true;

    }
};
