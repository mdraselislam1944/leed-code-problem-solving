#include <iostream>
#include <vector>
using namespace std;

bool validRow(vector<vector<char>>& board, int row) {
    vector<int> vTrack(10, 0);
    for (int i = 0; i < 9; i++) {
        if (board[row][i] != '.') {
            int num = board[row][i] - '0';
            if (vTrack[num] != 0) {
                return false;
            }
            vTrack[num]++;
        }
    }
    return true;
}

bool validCol(vector<vector<char>>& board, int col) {
    vector<int> vTrack(10, 0);
    for (int i = 0; i < 9; i++) {
        if (board[i][col] != '.') {
            int num = board[i][col] - '0';
            if (vTrack[num] != 0) {
                return false;
            }
            vTrack[num]++;
        }
    }
    return true;
}

bool validSubGrid(vector<vector<char>>& board, int startRow, int startCol) {
    vector<int> vTrack(10, 0);
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            char current = board[row + startRow][col + startCol];
            if (current != '.') {
                int num = current - '0';
                if (vTrack[num] != 0) {
                    return false;
                }
                vTrack[num]++;
            }
        }
    }
    return true;
}

bool isValid(vector<vector<char>>& board) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (!validRow(board, i) || !validCol(board, j) ||
                !validSubGrid(board, i - i % 3, j - j % 3)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board{
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    cout << (isValid(board) ? "true" : "false");
    return 0;
}
