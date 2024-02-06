#include <stdio.h>

int main (void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);

    int a, A;
    char c[110];

    a = A = 0;

    scanf("%[^\n]", &c);

    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
            A++;

        else if (c[i] >= 'a' && c[i] <= 'z')
            a++;
    }
    
    if (a >= A)
    {
        for (int i = 0; c[i] != '\0'; i++)
        {
            if (c[i] >= 'A' && c[i] <= 'Z')
                c[i] += 32;
        }
    }
    
    else if (a < A)
    {
        for (int i = 0; c[i] != '\0'; i++)
        {
            if (c[i] >= 'a' && c[i] <= 'z')
                c[i] -= 32;
        }
    }

    printf("%s\n", c);
}