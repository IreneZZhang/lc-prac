class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char cur = board[i][j];
                if (cur == '.') {
                    continue;
                }

                // Map '1'-'9' to index 0-8
                int digit = cur - '1';
                int box_idx = (i / 3) * 3 + (j / 3);

                // Check if digit already exists in current row, column, or 3x3 box
                if (rows[i][digit] || cols[j][digit] || boxes[box_idx][digit]) {
                    return false;
                }

                // Mark digit as seen
                rows[i][digit] = true;
                cols[j][digit] = true;
                boxes[box_idx][digit] = true;
            }
        }
        return true;

    }
};
