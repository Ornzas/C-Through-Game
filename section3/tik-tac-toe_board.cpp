// Программа Tic-Tac-Toe Board
// Демонстрирует работу с многомерными массивами
#include <iostream>
using namespace std;
int main()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = { {'O', 'X', 'O'},
                                  {' ', 'X', 'X'},
                                  {'X', 'O', 'O'}  };
    cout << "Here's the tic-tac-toe board:\n";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLUMNS; ++j)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "\n 'X' moves to the empty location.\n\n";
    board[1][0] = 'X';
    cout << "Now the tic-tac-tor board is:\n";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLUMNS; ++j)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "\n'X' wins!";
    return 0;
}
