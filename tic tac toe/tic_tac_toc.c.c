#include <stdio.h>

char board[3][3]; 

void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2)
            printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;  // Row win
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;  // Column win
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;  // Diagonal win
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;  // Diagonal win
    return 0;
}

int isFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

int main() {
    int row, col, player = 1;
    char mark;
    initializeBoard();

    while (1) {
        printBoard();

        if (player == 1)
            mark = 'X';
        else
            mark = 'O';

        printf("Player %d (%c), enter row and column (1-3): ", player, mark);
        scanf("%d %d", &row, &col);
        row--; col--;

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = mark;

            if (checkWin()) {
                printBoard();
                printf("Player %d (%c) wins 🥳🥳👑👑👑!\n", player, mark);
                break;
            }
            if (isFull()) {
                printBoard();
                printf("It's a draw!🤝😶‍🌫️\n");
                break;
            }
            if (player == 1)
                player = 2;
            else
                player = 1;
        } else {
            printf("Invalid move! Try again.\n");
        }
    }
    return 0;
}
