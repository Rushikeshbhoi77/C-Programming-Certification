#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
};

void displayBoard();
int checkWinner();
int isDraw();
void markBoard(int choice, char mark);

int main() {
    int player = 1;
    int choice;
    char mark;
    int status = -1;

    do {
        system("cls");

        printf("\n\tTIC TAC TOE GAME\n");
        printf("\t---------------\n");
        printf("\nPlayer 1 (x) - Player 2 (o)\n\n");

        displayBoard();

        player = (player % 2) ? 1:2;
        mark = (player == 1) ? 'x' : 'o';

        printf("Player %d, enter the position (1-9: ", player);
        scanf("%d", &choice);

        markBoard(choice, mark);

        if (checkWinner()) {
            system("cls");
            printf("\n\tTIC TAC TOE GAME\n");
            printf("\t---------------\n");
            printf("\nPlayer 1 (x) - Player 2 (o)\n\n");
            displayBoard();
            printf("\n ==> Plaer %d wins! \n", player);
            status = 1;
            break;
        }else if (isDraw()) {
            system("cls");
            printf("\n\tTIC TAC TOE GAME\n");
            printf("\t---------------\n");
            printf("\nPlayer 1 (x) - Player 2 (o)\n\n");
            displayBoard();
            printf("\n ==> Game draw!\n");
            status = 0;
            break;
        }

        player++;

    }while (status == -1);

    printf("\nThank you for playing Tic Tac Toe!\n");

    getch();
    return 0;
}

void displayBoard() {
    printf("\n\t %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n\t---|---|---");
    printf("\n\t %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n\t---|---|---");
    printf("\n\t %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);
}

void markBoard(int choice, char mark) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (choice < 1 || choice > 9 || board[row][col] == 'x' || board[row][col] == 'o') {
        printf("Invalid move! Try again.\n)");
        getch();
    } else {
        board[row][col] = mark;
    }
}

int checkWinner() {

    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
                return 1;
        }
    }

    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] )) {
            return 1;
    }

    return 0;
}

int isDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'x' && board[1] [j] != 'o')
                    return 0;
        }
    }
    return 1;
}

