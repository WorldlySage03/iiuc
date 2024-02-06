#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if(!h)
     h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h,c);
}

int main() {
    int i, j, n, x, y, t = 50;
    x = 104;
    y = 0;

    for (j = 0; j < 4; j++)
    {
        gotoxy(0, 0);
        for (i = 0; i < 3600; i++)
        {
            printf("*"); fflush(stdout);
        }
        Sleep(15);

        gotoxy(0, 0);
        for (i = 0; i < 3600; i++)
        {
            printf(" "); fflush(stdout);
        }
        Sleep(15);
    }

    for (i = 0; i < 30; i++, y++)
    {
        gotoxy(20, y);
        printf("#*******************************************************************************#"); fflush(stdout);
        Sleep(5);
    }

    x = 0;


    for (i = 0; i < 120; i++, x++)
    {
        y = 9;
        gotoxy(x, y);
        for (j = 0; j < 13; j++, y++)
        {
            gotoxy(x, y);
            printf("*");
        }
        Sleep(2);
    }

    //system("cls");

    gotoxy(30, 11);
    printf("                                                             \n"); fflush(stdout);
        Sleep(t);
    gotoxy(30, 12);
    printf("  ---------   |-------|    |------|    -------    |\\      |  \n"); fflush(stdout);
        Sleep(t);
    gotoxy(30, 13);
    printf("      |       |       |    |              |       | \\     |  \n"); fflush(stdout);
        Sleep(t);
    gotoxy(30, 14);
    printf("      |       |       |    |              |       |  \\    |  \n"); fflush(stdout);
        Sleep(t);
    gotoxy(30, 15);
    printf("      |       |-------|    |------|       |       |   \\   |  \n"); fflush(stdout);
        Sleep(t);
    gotoxy(30, 16);
    printf("      |       |       |           |       |       |    \\  |  \n"); fflush(stdout);
        Sleep(t);
    gotoxy(30, 17);
    printf("      |       |       |           |       |       |     \\ |  \n"); fflush(stdout);
        Sleep(t);
    gotoxy(30, 18);
    printf("      |       |       |    |------|    -------    |      \\|  \n"); fflush(stdout);
    gotoxy(30, 19);
    printf("                                                             \n"); fflush(stdout);
        Sleep(2000);

    x = 104;
    y = 30;

    for (i = 0; i <= 30; i++, y--)
    {
        gotoxy(20, y);
        printf("                                                                                 "); fflush(stdout);
        Sleep(5);
    }

    x = 120;


    for (i = 0; i <= 120; i++, x--)
    {
        y = 9;
        gotoxy(x, y);
        for (j = 0; j < 13; j++, y++)
        {
            gotoxy(x, y);
            printf(" ");
        }
        Sleep(2);
    }

    gotoxy(0, 0);
}
