#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board) {
    for(int i = 0; i < board.size(); i++) {

        for(int j = 0; j < board.size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(vector<vector<char>> board, int row, int col) {

    int n = board.size();

    // check upper column
    for(int i = 0; i < row; i++) {

        if(board[i][col] == 'Q') {
            return false;
        }
    }

    // check left upper diagonal
    int i = row;
    int j = col;

    while(i >= 0 && j >= 0) {

        if(board[i][j] == 'Q') {
            return false;
        }
        i--;
        j--;
    }

    // check right upper diagonal.
    i = row;
    j = col;

    while(i >= 0 && j < n) {

        if(board[i][j] == 'Q') {
            return false;
        }
        i--;
        j++;
    }
     return true;
}

void nQueens(vector<vector<char>> board , int row){

    int n = board.size();

    // base case
    if(row == n ){
        printBoard(board);
        return;
    }

    // try every column
    for(int j = 0; j < n; j++){

        if(isSafe(board , row , j)){

            // place queen
            board[row][j] = 'Q';

            // recursive call
            nQueens(board , row + 1);

            // backtracking
            board[row][j] = '.';
        }
    }
} // 
int main(){

    vector<vector<char>> board;
    int n = 2;

    for(int i = 0 ; i < n ; i++){

        vector<char> newRow;

        for(int j = 0; j < n; j++){
            newRow.push_back('.');
        }

        board.push_back(newRow);
    }
    nQueens(board, 0);

    return 0 ;
}
