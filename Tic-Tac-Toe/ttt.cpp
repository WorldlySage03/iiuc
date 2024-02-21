#include <cstdlib>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ll long long
#define PI M_PI

void gotoxy(int x, int y);

int main (void)
{
    char rematch[2];
    do
    {
        int position_mem[9] = {0}, x[9], y[9];
        char c[10] = "abcdefgeh", winner[1];

        x[0] = 2;
        y[0] = 3;
        x[1] = 6;
        y[1] = 3;
        x[2] = 10;
        y[2] = 3;
        x[3] = 2;
        y[3] = 5;
        x[4] = 6;
        y[4] = 5;
        x[5] = 10;
        y[5] = 5;
        x[6] = 2;
        y[6] = 7;
        x[7] = 6;
        y[7] = 7;
        x[8] = 10;
        y[8] = 7;

        for (int i = 0; i < 9; i++)
        {
            /// Clearing the square from previous turn

            gotoxy(0, 0);
            printf("                   ");
            gotoxy(0, 0);

            /// X's & O's turns

            int f = i % 2, f_win_draw = 0;
            if (f == 0)
            {
                printf("Player O's Turn : ");
            }
            else
            {
                printf("Player X's Turn : ");
            }

            /// Taking input

            int a;
            scanf("%d", &a);

            gotoxy(0, 3);
            printf("   |   |   \n");
            printf("---|---|---\n");
            printf("   |   |   \n");
            printf("---|---|---\n");
            printf("   |   |   \n");

            /// Placing previous round moves

            for (int j = 0; j < 9; j++)
            {
                if (position_mem[j] > 0)
                {
                    gotoxy(x[j], y[j]);
                    printf("%c", c[j]);
                }

                /// Printing position number
                // Currently inactive
                else
                {
                    gotoxy(x[j], y[j]);
                    printf("%c", '-');
                }
            }

            /// Placing current rounds X's and O's move on board

            switch (a)
            {
                case 1:
                    gotoxy(2, 3);
                    printf("%c", f == 0 ? 'O' : 'X');

                    position_mem[0]++;
                    c[0] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
                    goto checker;
                case 2:
                    gotoxy(6, 3);
                    printf("%c", f == 0 ? 'O' : 'X');
                    position_mem[1]++;
                    c[1] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
                    goto checker;
                case 3:
                    gotoxy(10, 3);
                    printf("%c", f == 0 ? 'O' : 'X');
                    position_mem[2]++;
                    c[2] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
                    goto checker;
                case 4:
                    gotoxy(2, 5);
                    printf("%c", f == 0 ? 'O' : 'X');
                    position_mem[3]++;
                    c[3] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
                    goto checker;
                case 5:
                    gotoxy(6, 5);
                    printf("%c", f == 0 ? 'O' : 'X');
                    position_mem[4]++;
                    c[4] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
                    goto checker;
                case 6:
                    gotoxy(10, 5);
                    printf("%c", f == 0 ? 'O' : 'X');
                    position_mem[5]++;
                    c[5] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
                    goto checker;
                case 7:
                    gotoxy(2, 7);
                    printf("%c", f == 0 ? 'O' : 'X');
                    position_mem[6]++;
                    c[6] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
                    goto checker;
                case 8:
                    gotoxy(6, 7);
                    printf("%c", f == 0 ? 'O' : 'X');
                    position_mem[7]++;
                    c[7] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
                    goto checker;
                case 9:
                    gotoxy(10, 7);
                    printf("%c", f == 0 ? 'O' : 'X');
                    position_mem[8]++;
                    c[8] = f == 0 ? 'O' : 'X';
                    winner[0] = f == 0 ? 'O' : 'X';
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
                gotoxy(0, 9);
                printf("🥳🎉 Player %c Is The Winner!!!\n\n", winner[0]);

                f_win_draw = 1;
            }
            else if (i == 8)
            {
                gotoxy(0, 9);
                printf("Draw 😔\n\n");

                f_win_draw = 1;
            }

            /// Rematch maker

            if (f_win_draw == 1)
            {
                gotoxy (0, 11);
                printf("Would you like to play again? (Y/n) ");
                scanf("%c", &rematch[0]);
                break;
            }
        }
    }
    while (rematch[0] == 'y' || rematch[0] == 'Y');
}

void gotoxy(int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}
