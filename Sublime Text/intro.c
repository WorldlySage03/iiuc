#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI M_PI
#define ll long long
#define ull unsigned long long
#define ld long double

int main ()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);

    int n, scr, f1, f2, f3;
    scr = f1 = f2 = f3 = 0;

    scanf("%d\n", &n);

    char a[n + 1000];
    gets(a);

    for (int i = 0; a[i]; i++)
    {
        if (a[i] == '1') continue;

        if (f1 == 1)
        {
            if (a[i] == a[i + 1])
            {
                i += 2;
                f1 = 0;
            }
        }

        if (f2 == 1)
        {
            for (int j = i + 1; a[j]; j++)
            {
                if (a[i + 1] == a[j])
                {
                    a[strlen(a)] = a[i + 1];
                    a[strlen(a) + 1] = a[j];
                    a[strlen(a) + 2] = '\0';
                    a[i + 1] = a[j] = '1';
                    f2 = 0;
                }
            }
        }

        if (a[i] == 'V') scr += 5;
        else if (a[i] == 'W') scr += 2;
        else if (a[i] == 'X') f1 = 1;
        else if (a[i] == 'Y') f2 = 1;
        else if (a[i] == 'Z')
        {
            for (int j = i + 1; a[j]; j++)
            {
                    printf("111");
                if (a[j] == 'V')
                {
                    scr /= 5;
                    a[j] = '1';
                }
                else if (a[j] == 'W')
                {
                    scr /= 2;
                    a[j] = '1';
                }
            }
        }
    }
    printf("%d\n", scr);
    printf("%s", a);
}