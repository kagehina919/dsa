#include <bits/stdc++.h>
using namespace std;

void print(int board[][]) {
    cout << "YES" << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int board[][], int row, int col) {
    int i, j;
    for(i=0;i<col;i++) if(board[row][i] == 1) return false;
    for(i=row && j=col; i<n && j>=0l; i++ && j--) if(board[i][j] == 1) return false;
    for(i=row && j=col; i>=0 && j>=0; i-- && j--) if(board[i][j] == 1) return false;
    return true;
}

bool NQueens(int board[][], int col) {
    for(int i=0;i<n;i++) {
        if(isSafe(board[i][col], i, col)) {
            board[i][col] = 1;
            if(NQueens(board, col+1)) return true;
            board[i][col] = 0;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int board[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0,j<n;j++) {
            board[i][j] = 0;
        }
    }
    if(NQueens) print(board);
    return 0;
}
