#include<iostream>
using namespace std;





bool isSafeRow(int board[][9] , int row, int num) {

  for (int i = 0; i < 9; i++) {
    if (board[row][i] == num) {
      return false;
    }
  }

  return true;

}

bool isSafeCol(int board[][9], int col, int num) {

  for (int i = 0; i < 9; i++) {
    if (board[i][col] == num) {
      return false;
    }
  }
  return true;
}

bool isSafeGrid(int board[][9], int row, int col, int num) {

  int rowF = row - (row % 3);
  int colF = col - (col % 3);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

      if (board[i + rowF][j + colF] == num) {
        return false;
      }
    }
  }
  return true;


}


bool isSafe(int board[][9], int row, int col, int num) {

  if (isSafeRow(board, row, num) && isSafeCol(board, col, num) && isSafeGrid(board, row, col, num)) {
    return true;
  }

  return false;


}


bool findEmpty(int board[][9], int &row, int &col) {

  for (int  i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (board[i][j] == 0) {
        row = i;
        col = j;
        return true;
      }
    }
  }

  return false;
}

bool sudokuSolver(int board[][9]) {

  int row, col;

  if (findEmpty(board, row, col) == false) {
    return true;
  }

  for (int i = 1; i <= 9; i++) {

    if (isSafe(board, row, col, i)) {
      board[row][col] = i;


      if (sudokuSolver(board)) {
        return true;
      }
    }
    board[row][col] = 0;

  }

  return false;

}



int main() {

  int n = 9;
  int board[9][9];
  for (int i = 0; i < n ; i++) {
    for (int j = 0; j < n; j++) {
      cin >> board[i][j];
    }
  }
  sudokuSolver(board);

  for (int i = 0; i < n ; i++) {
    for (int j = 0; j < n; j++) {
      cout << board[i][j];
    }
    cout << endl;
  }

}


