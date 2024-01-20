/*
#include <stdio.h>

int main (void)
{
    int x;
    scanf("%d", &x);

    if (x > 9 && x < 100)
        printf("2 Digit\n");

    else if (x > 99 && x < 1000)
        printf("3 Digit\n");

    else
        printf("None\n");
}

#include <stdio.h>

int main (void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((a < b && b < c) || (a > b && b > c)
        printf("yes\n");
    else
        printf("no\n");
}

#include <stdio.h>

int main (void)
{
    int x, sum = 0;
    for (int i = 0; i < 5; i++){
        scanf("%d", &x);
        if (x == 1)
            sum += 1;
    }
    if (sum > 2)
        printf("W\n");
    else
        printf("L\n");
}

#include <stdio.h>

int main (void)
{
    int r, w, x;
    r = w = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &x);

        if (x >= 0)
            r += x;
        else if (x < 0)
            w += 1;
    }
    printf("Run = %d\n", r);
    printf("Wicket = %d\n", w);
}

///5
*/

#include <stdio.h>

int main (void)
{
    int x[9];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &x[i]);
    }
    if ((x[0] == x[1] && x[1] == x[2]) || (x[3] == x[4] && x[4] == x[5]) || (x[6] == x[7] && x[7] == x[8]) || (x[0] == x[3] && x[3] == x[6]) || (x[1] == x[4] && x[4] == x[7]) || (x[2] == x[5] && x[5] == x[8]) || (x[0] == x[4] && x[4] == x[8]))
    {
        if (x[0] == 1)
            printf("1 wins\n");
        else
            printf("2 wins\n");
    }
}
