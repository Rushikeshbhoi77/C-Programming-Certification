#include <stdio.h>
#include <stdlib.h>

int rd() {
    int rem;
A:
    rem = rand() % 7;
    if(rem == 0)
            goto A;
    else
        return rem;
}

void displayChart(int p1, int p2) {
    int i, j, num, shift =0;

    printf("\n\t\t\t---SNAKE AND LADDER BOARD---\n\n");

    for (i = 10; i > 0; i--) {
        int rowBase = (i - 1) * 10;

        if (shift % 2 == 0) {
            for (j = 10; j >= 1; j--) {
                num = rowBase + j;

                if (num == p1 && num == p2)
                    printf("P1P2*\t");
                else if (num == p1)
                    printf("P1*\t");
                else if (num == p2)
                    printf("P2*\t");
                else if (num == 99 || num ==65 || num == 42 || num == 25)
                    printf("S\t");
                else if (num == 79 || num == 64 || num == 36 || num == 13)
                    printf("L\t");
                else
                    printf("%d\t", num);
            }
        } else {
            for (j = 1; j <= 10; j++) {
                num = rowBase + j;
                if (num == p1 && num == p2)
                    printf("P1P2*\t");
                else if (num == p1)
                    printf("P1*\t");
                else if(num == p2)
                    printf("P2*\t");
                else if (num == 99 || num == 65 || num == 42 || num == 25)
                    printf("S\t");
                else if (num == 79 || num == 64 || num == 36 || num == 13)
                    printf("L\t");
                else
                    printf("%d\t", num);
            }
        }
        shift++;
        printf("\n\n");
    }

    printf("---------------------------------------------------------------------------\n");
    printf("Player 1 Position: %d\t|\tPlayer 2 Position: %d\n", p1, p2);
    printf("---------------------------------------------------------------------------\n");
}

int movePlayer(int curPos, int dice, int playerNum) {
    curPos += dice;

    if (curPos > 100) {
        curPos -= dice;
        printf("Player %d exceed 100! Staying at %d.\n", playerNum, curPos);
        return curPos;
    }

    if
        (curPos == 99) curPos = 1;
    else if
        (curPos == 65) curPos = 40;
    else if
        (curPos == 25) curPos = 9;

    else if
        (curPos == 13) curPos = 45;
    else if
        (curPos == 60) curPos = 83;
    else if
        (curPos == 70) curPos = 93;

    return curPos;
}

int main() {
    int curPos1 = 0, curPos2 = 0, dice;
    char choice;

    while (1) {
        system("cls");
        printf("\n\t\t\t    **SNAKE AND LADDER GAME **\n\t\t\t    (Two Player Version)\n");
        printf("-----------------------------------------------------------------------\n");

        displayChart(curPos1, curPos2);

        printf("\n1. Player 1 plays\n2.Player 2 plays\n3. Exit\nEnter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                dice = rd();
                printf("\nPlayer 1 rolled a %d\n", dice);
                curPos1 = movePlayer(curPos1, dice, 1);

                if (curPos1 == 100) {
                    displayChart (curPos1, curPos2);
                    printf("\n Player 1 wins the game! \n");
                    exit(0);
                }
                break;

            case '2':
                dice = rd();
                printf("\nPlayer 2 rolled a %d\n", dice);
                curPos2 = movePlayer(curPos2, dice, 2);

                if (curPos2 == 100) {
                    displayChart (curPos1, curPos2);
                    printf("\n Player 2 wins the Game! \n");
                    exit(0);
                }
                break;

            case '3':
                printf("Thanks for playing!n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }

            printf("\nPress Enter to continue...");
            getchar();
            getchar();
    }

    return 0;
}

