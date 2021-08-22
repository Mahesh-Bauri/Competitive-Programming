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


void nQueenHelper(int **board, int n, int row) {

    if ( row == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << board[i][j] << " ";
            }

        }
        cout << endl;

    }


    for (int j = 0; j < n; j++) {

        if (isValid(board, n, row, j)) {
            board[row][j] = 1;
            nQueenHelper(board, n, row + 1);
            board[row][j] = 0;
        }

    }

    return ;
}


void placeNQueens(int n) {

    int **board = new int*[n];
    for (int i = 0; i < n; i++) {
        board[i] = new int[n];
        for (int j = 0; j < n; j++) {
            board[i][j] = 0;
        }
    }

    nQueenHelper(board, n, 0);

}
