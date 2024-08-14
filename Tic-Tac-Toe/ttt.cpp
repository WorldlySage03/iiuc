#include <cstdlib>
#include <stdio.h>

/// Ansi color codes: https://gist.github.com/Prakasaka/219fe5695beeb4d6311583e79933a009

#define ANSI_COLOR_RED "\e[1;31m"
#define ANSI_COLOR_GREEN "\e[1;32m"
#define ANSI_COLOR_YELLOW "\e[1;33m"
#define ANSI_COLOR_PURPLE "\e[1;34m"
#define ANSI_COLOR_RESET "\033[0m"

void gotoxy(int x, int y);

int main (void)
{
    char rematch;
    do
    {
        int position_mem[9] = {0}, x[9], y[9];
        char c[10] = "abcdefgeh", winner[1];

        /// Assigning X and Y axis value

        for (int i = 0, j = 2; i < 9; i++, j += 4)
        {
            x[i] = j;
            if (j == 10) j -= 12;
        }

        for (int i = 3, j = 3; i <= 9; i += 3, j += 2)
        {
            y[i - 1] = j;
            y[i - 2] = j;
            y[i - 3] = j;
        }

        // x[0] = 2;
        // y[0] = 3;
        // x[1] = 6;
        // y[1] = 3;
        // x[2] = 10;
        // y[2] = 3;
        // x[3] = 2;
        // y[3] = 5;
        // x[4] = 6;
        // y[4] = 5;
        // x[5] = 10;
        // y[5] = 5;
        // x[6] = 2;
        // y[6] = 7;
        // x[7] = 6;
        // y[7] = 7;
        // x[8] = 10;
        // y[8] = 7;

        /// Printing the board before match

        gotoxy(0, 3);
        printf(ANSI_COLOR_PURPLE " - | - | - \n");
        printf("---+---+---\n");
        printf(" - | - | - \n");
        printf("---+---+---\n");
        printf(" - | - | - \n" ANSI_COLOR_RESET);

        for (int i = 0; i < 9; i++)
        {
            printf(ANSI_COLOR_RESET);

            int a, temp, f = i % 2, f_win_draw = 0;
            do
            {
                temp = 0;
                /// Clearing the square from previous turn

                gotoxy(0, 0);
                printf("                      ");
                gotoxy(0, 0);

                /// X's & O's turns

                if (f == 0) printf(ANSI_COLOR_RED "Player O's Turn : " ANSI_COLOR_RESET);
                else printf(ANSI_COLOR_GREEN "Player X's Turn : " ANSI_COLOR_RESET);

                /// Taking input

                scanf("%d", &a);

                if (position_mem[a - 1] > 0) temp = 1;
            }
            while (temp == 1 || 9 < a || a < 1);

            gotoxy(0, 3);
            printf(ANSI_COLOR_PURPLE " - | - | - \n");
            printf("---+---+---\n");
            printf(" - | - | - \n");
            printf("---+---+---\n");
            printf(" - | - | - \n" ANSI_COLOR_RESET);

            /// Placing previous round moves

            for (int j = 0; j < 9; j++)
            {
                if (position_mem[j] > 0)
                {
                    if (c[j] == 'O') printf(ANSI_COLOR_RED);
                    else printf(ANSI_COLOR_GREEN);

                    gotoxy(x[j], y[j]);
                    printf("%c", c[j]);
                }

                /// Printing position number
                // Currently inactive

                else
                {
                    printf(ANSI_COLOR_RESET);

                    gotoxy(x[j], y[j]);
                    printf("%c", '-');
                }
            }

            /// Placing current rounds X's and O's move on board

            char c_x_o;
            c_x_o = f == 0 ? 'O' : 'X';

            if (c_x_o == 'O') printf(ANSI_COLOR_RED);
            else printf(ANSI_COLOR_GREEN);

            switch (a)
            {
                case 1:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;

                case 2:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;

                case 3:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;

                case 4:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;

                case 5:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;

                case 6:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;

                case 7:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;

                case 8:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;

                case 9:
                    gotoxy(x[a-1], y[a-1]);
                    printf("%c", c_x_o);

                    position_mem[a - 1]++;
                    c[a - 1] = c_x_o;

                    goto checker;
            }

            /// Checking if winner

            checker:
            if (c[0] == c[1] && c[1] == c[2] ||
                c[3] == c[4] && c[4] == c[5] ||
                c[6] == c[7] && c[7] == c[8] ||
                c[0] == c[3] && c[3] == c[6] ||
                c[1] == c[4] && c[4] == c[7] ||
                c[2] == c[5] && c[5] == c[8] ||
                c[0] == c[4] && c[4] == c[8] ||
                c[2] == c[4] && c[4] == c[6])
            {
                printf(ANSI_COLOR_RESET);

                gotoxy(0, 9);
                printf("Player %c Is The Winner!!! 🥳🎉", c_x_o);

                f_win_draw = 1;
            }
            else if (i == 8)
            {
                printf(ANSI_COLOR_RESET);

                gotoxy(0, 9);
                printf("Draw ");

                f_win_draw = 1;
            }

            /// Rematch maker

            if (f_win_draw == 1)
            {
                gotoxy (0, 11);

                printf(ANSI_COLOR_YELLOW "Would you like to play again? (Y/n) ");
                scanf(" %c", &rematch);

                if (rematch == 'y'|| rematch == 'Y')
                    system("clear");

                printf(ANSI_COLOR_RESET);

                break;
            }
        }
    }
    while (rematch == 'y' || rematch == 'Y');

    getchar();
}

void gotoxy(int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}
