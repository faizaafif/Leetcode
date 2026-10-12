//https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> st;

            for (int j = 0; j < 9; j++) {
                char c = board[i][j];

                if (c == '.') continue;
                if (st.find(c) != st.end()) return false;

                st.insert(c);
            }
        }

        for (int i = 0; i < 9; i++) {
            unordered_set<char> st;

            for (int j = 0; j < 9; j++) {
                char c = board[j][i];

                if (c == '.') continue;
                if (st.find(c) != st.end()) return false;

                st.insert(c);
            }
        }

        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                unordered_set<char> st;

                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {
                        char c = board[i][j];

                        if (c == '.') continue;
                        if (st.find(c) != st.end()) return false;

                        st.insert(c);
                    }
                }
            }
        }

        return true;
    }
};