#include<bits/stdc++.h>
using namespace std;
void findBishopPosition(vector<vector<char>>& board) {
    int row = -1, col = -1;

    for (int i = 1; i <7; i++) {
        for (int j = 1; j < 7; j++) { 
            if (board[i][j] == '#' &&
                board[i - 1][j - 1] == '#' &&
                board[i - 1][j + 1] == '#' &&
                board[i + 1][j - 1] == '#' &&
                board[i + 1][j + 1] == '#') {
                row = i + 1; 
                col = j + 1; 
                break;
            }
        }
        if (row != -1) {
            break;
        }
    }

    cout << row << " " << col << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<vector<char>> board(8, vector<char>(8));

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> board[i][j];
            }
        }

        findBishopPosition(board);
    }

    return 0;
}
