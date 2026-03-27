#include <iostream>
using namespace std;

char board[3][3];
char currentPlayer = 'X';

// Initialize board with spaces
void initializeBoard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// Display board
void displayBoard()
{
    cout << "\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j];
            if(j < 2) cout << " |";
        }
        cout << "\n";
        if(i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

// Make move
bool makeMove(int row, int col)
{
    if(board[row][col] == ' ')
    {
        board[row][col] = currentPlayer;
        return true;
    }
    else
    {
        cout << "Invalid move! Cell already occupied.\n";
        return false;
    }
}

// Switch player
void switchPlayer()
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

// Check winner
bool checkWin()
{
    // Rows & Columns
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] != ' ' &&
           board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return true;

        if(board[0][i] != ' ' &&
           board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return true;
    }

    // Diagonals
    if(board[0][0] != ' ' &&
       board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return true;

    if(board[0][2] != ' ' &&
       board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return true;

    return false;
}

int main()
{
    initializeBoard();

    int row, col;
    int moves = 0;

    while(true)
    {
        displayBoard();

        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;

        if(row < 0 || row > 2 || col < 0 || col > 2)
        {
            cout << "Invalid position! Try again.\n";
            continue;
        }

        if(!makeMove(row, col))
            continue;

        moves++;

        if(checkWin())
        {
            displayBoard();
            cout << "🎉 Player " << currentPlayer << " wins!\n";
            break;
        }

        if(moves == 9)
        {
            displayBoard();
            cout << "It's a draw!\n";
            break;
        }

        switchPlayer();
    }

    return 0;
}