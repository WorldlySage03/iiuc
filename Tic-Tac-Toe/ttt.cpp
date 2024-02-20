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
    for (int i = 0; i >= 0; i++)
    {
        gotoxy(0, 0);
        printf("                      ");
        gotoxy(0, 0);

        // X & O turns
        int x = i % 2;
        if (x == 0) printf("Player O : ");
        else printf("Player X : ");

        // Taking input
        int a;
        scanf("%d", &a);

        gotoxy(0, 3);
        printf("   |   |   \n");
        printf("---|---|---\n");
        printf("   |   |   \n");
        printf("---|---|---\n");
        printf("   |   |   \n\n");

        switch (a)
        {
            case 1:
                gotoxy(2, 3);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
            case 2:
                gotoxy(6, 3);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
            case 3:
                gotoxy(10, 3);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
            case 4:
                gotoxy(2, 5);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
            case 5:
                gotoxy(6, 5);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
            case 6:
                gotoxy(10, 5);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
            case 7:
                gotoxy(2, 7);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
            case 8:
                gotoxy(6, 7);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
            case 9:
                gotoxy(10, 7);
                printf("%c", x == 0 ? 'O' : 'X');
                continue;
        }
    }
}

void gotoxy(int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}
