#include<iostream>
using namespace std;



bool isValid(int **board, int n, int row, int col) {

    //Same column

    for (int i = row - 1; i >= 0; i--) {
        if (board[i][col] == 1) {
            return false;
        }
    }


    //uppper left
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }


    //upper right

    for (int i = row - 1 , j = col + 1; i >= 0 && j <= n - 1; j++, i--) {
        if (board[i][j] == 1)
            return false;
    }

    return true;

}


int nQueenHelper(int **board, int n, int row) {
    int count = 0;
    if ( row == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 1) {
                    cout << "Q" << " ";
                } else {
                    cout << "." << " ";
                }
            }
            cout << endl;

        }
        cout << endl;
        return 1;

    }


    for (int j = 0; j < n; j++) {

        if (isValid(board, n, row, j)) {
            board[row][j] = 1;
            count += nQueenHelper(board, n, row + 1);
            board[row][j] = 0;
        }

    }

    return count ;
}


int placeNQueens(int n) {

    int **board = new int*[n];
    for (int i = 0; i < n; i++) {
        board[i] = new int[n];
        for (int j = 0; j < n; j++) {
            board[i][j] = 0;
        }
    }

    return nQueenHelper(board, n, 0);

}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << placeNQueens(n);

}