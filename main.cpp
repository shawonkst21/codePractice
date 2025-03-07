#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<string>> result;

bool isValid(int row, int col, vector<string>& board) {
    for (int i = row - 1; i >= 0; i--) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}

void solve(vector<string>& board, int row) {
    if (row == N) {
        result.push_back(board);
        return;
    }
    for (int col = 0; col < N; col++) {
        if (isValid(row, col, board)) {
            board[row][col] = 'Q';
            solve(board, row + 1);
            board[row][col] = '.';
        }
    }
}

void solveNQueens(int n) {
    N = n;
    vector<string> board(n, string(n, '.'));
    solve(board, 0);
}

void printSolutions() {
    for (const auto& solution : result) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    solveNQueens(n);
    cout << "Possible solutions:\n";
    printSolutions();
    return 0;
}
