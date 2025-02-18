///A
#include <stdio.h>

int main ()
{
    int i, a, b;
    char c[1010], d[1010];
    a = b = 0;

    scanf("%s ", c);
    scanf("%s", d);

    for (i = 0; c[i] != '\0'; i++)
    {
        a++;
    }
    for (i = 0; d[i] != '\0'; i++)
    {
        b++;
    }
    printf("%d %d\n", a, b);
    printf("%s %s\n", c, d);
}

///B
#include <stdio.h>
#include <string.h>

int main ()
{
    char st[1000000];

    scanf("%[^\\]", st);

    printf("%s", st);
}

///C
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    int i;
    char x[22], y[22];

    gets(x);
    gets(y);

    for (i = 0; x[i] && y[i]; i++)
    {
        if (x[i] != y[i])
            break;
    }

    if (x[i] < y[i])
        printf("%s", x);
    else
        printf("%s", y);
}

///D
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[12], b[12], t;

    gets(a);
    gets(b);

    printf("%d %d\n", strlen(a), strlen(b));

    printf("%s%s\n", a, b);

    t = a[0];
    a[0] = b[0];
    b[0] = t;

    printf("%s %s\n", a, b);
}

///E
#include <stdio.h>
#include <string.h>

int main (void)
{
    long long sum = 0;
    char a[1000000];
    gets(a);

    for (int i = 0; a[i]; i++)
    {
        sum += a[i] - 48;
    }
    printf("%lld\n", sum);
}

///F
#include <stdio.h>
#include <string.h>

int main ()
{
    int n, l;
    char s[110];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", s);

        l = strlen(s);

        if (l > 10)
        {
            printf("%c%d%c\n", s[0], l - 2, s[l-1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }
}

///G
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    int i;
    char a[1000010];

    gets(a);

    for (i = 0; a[i]; i++)
    {
        if (a[i] == ',')
            a[i] = ' ';

        else if ('a' <= a[i] && a[i] <= 'z')
            a[i] = toupper(a[i]);

        else if ('A' <= a[i] && a[i] <= 'Z')
            a[i] = tolower(a[i]);
    }
    printf("%s\n", a);
}

///H
#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j, n, f, a;
    char t[1000001];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]", t);
        a = strlen(t);
        f = 1;

        for (j = 0; j < a-2; j++)
        {
            if ((t[j] == '0' && t[j+1] == '1' && t[j+2] == '0') ||
                (t[j] == '1' && t[j+1] == '0' && t[j+2] == '1'))
            {
                f = 0;
                break;
            }
        }

        if (f == 1)
        {
            printf("Bad\n");
        }
        else
        {
            printf("Good\n");
        }
    }
}

///I
#include <stdio.h>
#include <string.h>

int main ()
{
    int z, c;
    char a[1001], b[1001];

    gets(a);
    z = strlen(a);
    b[z] = '\0';

    for (int i = 0; a[i]; i++, z--)
    {
        b[z-1] = a[i];
    }

    c = strcmp(a, b);

    if (c == 0)
        printf("YES\n");
    else
        printf("NO\n");
}

///J
#include <stdio.h>
#include <string.h>

char a[10000001];
int main ()
{
    int i, j, n, alpha[27] = {}, f;

    gets(a);
    n = strlen(a);

    for (i = 0; i < n; i++)
    {
        f = a[i];
        alpha[f - 97] += 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (alpha[i] != 0)
            printf("%c : %d\n", (char) 97 + i, alpha[i]);
    }
}


///K
#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j, n, a, b;
    char s[51], t[51];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %[^ ] %[^\n]", s, t);

        a = strlen(s);
        b = strlen(t);

        if (a == b)
        {
            for (j = 0; j < a; j++)
                printf("%c%c", s[j], t[j]);
        }

        else if (a < b)
        {
            for (j = 0; j < a; j++)
                printf("%c%c", s[j], t[j]);

            for (j = a; j < b; j++)
                printf("%c", t[j]);

        }

        else if (a > b)
        {
            for (j = 0; j < b; j++)
                printf("%c%c", s[j], t[j]);

            for (j = b; j < a; j++)
                printf("%c", s[j]);
        }
        printf("\n");
    }
}

///L


///M
#include <stdio.h>
#include <string.h>

int main (void)
{
    int f = 0;
    char a[10001];

    gets(a);

    for (int i = 0; a[i]; i++)
    {
        if (a[i] == 'h' && f == 0)
        {
            f++;
        }
        else if (a[i] == 'e' && f == 1)
        {
            f++;
        }
        else if (a[i] == 'l' && f == 2)
        {
            f++;
        }
        else if (a[i] == 'l' && f == 3)
        {
            f++;
        }
        else if (a[i] == 'o' && f == 4)
        {
            f++;
        }
    }
    if (f == 5)
        printf("YES\n");
    else
        printf("NO\n");
}

///N
#include <stdio.h>
#include <string.h>

int main (void)
{
    int n, cnt = 1, b = 0, c = 1;
    scanf("%d\n", &n);

    char a[n];
    gets(a);

    if (strlen(a) == 1)
        printf("%d\n", 1);
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] != a[i+1])
                cnt++;
            else
            {
                c++;
            }

            if (b < cnt)
                b = cnt;
        }
        if (c == n)
            printf("%d\n", 0);
        else
            printf("%d\n", b);
    }
}

///O
#include <stdio.h>
#include <string.h>

int main ()
{
    int n, x[26] = {0};
    char a;

    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a);
        x[a - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
       for (int j = 0; j < x[i]; j++)
       {
           printf("%c", i + 97);
       }
    }
}

///P


///Q
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char s[1000001];
    gets(s);

    for (int i = 0; s[i]; i++)
    {
        if (s[i + 1] == ' ' || s[i + 1] == '\0')
        {
            for (int j = i; s[j] != ' ' && j >= 0; j--)
            {
                printf("%c", s[j]);
            }
            if (s[i+1] == '\0')
                break;
            printf(" ");
        }
    }
}

///R


///S


///T
#include <stdio.h>
#include <string.h>

int main ()
{
    int i, f = 0;
    char a[10001];
    gets(a);

    printf("username: ");
    for (i = 0; a[i] != '&'; i++)
    {
        if (a[i] == '?') i += 10, f = 1;
        if (f == 1) printf("%c", a[i]);
    }

    printf("\npwd: ");
    for (i += 5; a[i] !='&'; i++)
    {
        printf("%c", a[i]);
    }

    printf("\nprofile: ");
    for (i += 9; a[i] !='&'; i++)
    {
        printf("%c", a[i]);
    }

    printf("\nrole: ");
    for (i += 6; a[i] !='&'; i++)
    {
        printf("%c", a[i]);
    }

    printf("\nkey: ");
    for (i += 5; a[i]; i++)
    {
        printf("%c", a[i]);
    }
}

///U
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
    int cnt[5] = {0}, x = INT_MAX;
    char a[1000001];
    gets(a);

    for (int i = 0; a[i]; i++)
    {
        if (a[i] == 'E' || a[i] == 'e') cnt[0]++;

        if (a[i] == 'G' || a[i] == 'g') cnt[1]++;

        if (a[i] == 'Y' || a[i] == 'y') cnt[2]++;

        if (a[i] == 'P' || a[i] == 'p') cnt[3]++;

        if (a[i] == 'T' || a[i] == 't') cnt[4]++;
    }

    for (int i = 0; i < 5; i++)
    {
        if (cnt[i] < x) x = cnt[i];
    }
    printf("%d\n", x);
}

///V
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
    char a[1001];
    gets(a);

    for (int i = 0; a[i]; i++)
    {
        if (a[i] == 'E')
            if (a[i + 1] == 'G')
                if (a[i + 2] == 'Y')
                    if (a[i + 3] == 'P')
                        if (a[i + 4] == 'T')
                        {
                            printf(" ");
                            i += 4;
                            continue;
                        }
        printf("%c", a[i]);
    }
}

///W


///X


///Y


///Z
