#include <iostream>
using namespace std;
int main(){
  //goal is to make global sudoku board and have it displayed, then we'll deal with everything else.
  string board [9][9];
  for(int i = 0; i < 9; i++){
      for(int j = 0; j < 9; j++){
        board[i][j] = "-";
      }
  }
  for(int i = 0; i < 9; i ++){
    for (int j = 0; j < 9; j++){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }

  return 0;

}
