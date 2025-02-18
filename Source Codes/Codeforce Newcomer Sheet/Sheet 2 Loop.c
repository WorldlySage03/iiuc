///A
#include <stdio.h>

int main() {
    int i,n;

    scanf("%d", &n);

    for( i=1; i<=n; i++)
        printf("%d\n", i);

    return 0;
}

///B
#include <stdio.h>

int main() {
    int i, n;

    scanf("%d", &n);

    for( i=1; i<=n; i++){
        if(i%2 == 0){
            printf("%d\n", i);
        }
        else if(n == 1)
            printf("-1\n");
    }

    return 0;
}

///C
#include <stdio.h>

int main() {
    int i, n, x, a, b, c, d;
    a = b = c = d = 0;

    scanf("%d", &n);

    for( i = 1; i <= n; i++){
        scanf("%d", &x);

        if(x%2 == 0){
            a += 1;
        }

        if(x%2 != 0){
            b += 1;
        }

        if(x > 0){
            c += 1;
        }

        if(x < 0){
            d += 1;
        }
    }
    printf("Even: %d\n", a);
    printf("Odd: %d\n", b);
    printf("Positive: %d\n", c);
    printf("Negative: %d\n", d);

    return 0;
}

///D
#include <stdio.h>

int main() {
    int n;

    while(1){
        scanf("%d", &n);

        if(n == 1999){
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }

    return 0;
}

///E
#include <stdio.h>

int main() {
    int i, n, x, a;
    a = 0;

    scanf("%d", &n);

    for( i = 1; i <= n; i++){
        scanf("%d", &x);

        if(a < x)
            a = x;
    }
    printf("%d\n", a);

    return 0;
}

///F
#include <stdio.h>

int main() {
    int i, x;

    scanf("%d", &x);

    for( i = 1; i <= 12; i++){
        printf("%d * %d = %d\n", x, i, x*i);
    }

    return 0;
}

///G
#include <stdio.h>

int main() {
    int i, n, x;
    long long int m, y;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &x);
        y = 1;

        for(m = 1; m <= x; m++){
            y *= m;
        }

        printf("%lld\n", y);
    }

    return 0;
}


///H
#include <stdio.h>

int main() {
    int i, n, x = 0;

    scanf("%d", &n);

    for(i = 2; i < n; i++){
        if(n%i  == 0){
            x = 1;
            break;
        }
    }
    if(x == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

///I
#include <stdio.h>

int main() {
    int x, y, z;
    y = 0;

    scanf("%d", &x);
    z = x;

    while(x != 0){
        y = (y*10) + (x%10);
        x = x/10;
    }

    if(y == z){
        printf("%d\n", y);
        printf("YES\n");
    }
    else{
        printf("%d\n", y);
        printf("NO\n");
    }

    return 0;
}

///J
#include <stdio.h>

int main() {
    int i, n, j, x;

    scanf("%d", &n);

    for( i = 2; i <= n; i++){
        x = 0;
        for( j = 2; j < i; j++){
            if(i%j == 0){
                x = 1;
            }
        }
        if(x == 0){
            printf("%d ", i);
        }
    }

    return 0;
}

///K
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n ; i++){
        if(n % i == 0)
            printf("%d\n", i);
    }

    return 0;
}

///L
#include <stdio.h>

int main() {
    int i, x, y, a;

    scanf("%d%d", &x, &y);

    for( i = 1; i <= x && i <= y; i++){
        if(x%i == 0 && y%i == 0){
            a = i;
        }
    }

    printf("%d\n", a);


    return 0;
}

///M
#include <stdio.h>

int main() {
    int x, y, a, b, c = 0;

    scanf("%d%d", &x, &y);

    while(x <= y){
        b = 1;
        a = x;

        while(a != 0){
            if((a%10 != 4) && (a%10 != 7)){
                b = 0;
            }
            a /= 10;
        }
        if(b == 1){
            printf("%d ", x);
            c = 1;
        }
        x++;
    }
    if(c != 1){
        printf("-1\n");
    }

    return 0;
}

///N
#include <stdio.h>

int main() {
    char a;
    int i, j, n, m;

    scanf("%c", &a);
    scanf("%d", &n);

    for( i = 1; i <= n; i++){
        scanf("%d", &m);

        for( j = 1; j <= m; j++){
            printf("%c", a);
        }
        printf("\n");
    }

    return 0;
}

///O
#include <stdio.h>

int main() {
    int i, n;

    scanf("%d", &n);

    for( i = 1; i <= n; i++){
        for( int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

///P
#include <stdio.h>

int main() {
    int i, n, j, x;

    scanf("%d", &n);

    for( i = 0; i < n; i++){
        for( j = n-i; 1 <= j; j--){
                printf("*");
        }
        printf("\n");
    }

    return 0;
}

///Q


///R


///S


///T


///U


///V


///W


///X


///Y


///Z
