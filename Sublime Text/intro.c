#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ll long long
#define PI M_PI

int main (void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);

    int n;
    scanf("%d\n", &n);
    char a[n][20];

    for (int i = 0; i < n; i++)
        gets(a[i]);

    int m;
    scanf("%d\n", &m);
    char b[n][20];

    for (int i = 0; i < m; i++)
        gets(b[i]);
        
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a = b;
            
}