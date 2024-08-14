#include <stdio.h>

int main ()
{
    int a, b;
    FILE *fr, *fw; // a, b, c ...

    //File reading
    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    //File scanf  ---> fscanf
    //FIle printf ---> fprintf
    fscanf(fr, "%d%d", &a, &b);

    fprintf(fw, "%d", a + b);

    //File close (Good practice)
    fclose(fr);
    fclose(fw);
}

or,

#include <stdio.h>

int main ()
{
    int a, b;
    FILE *fr;

    fr = fopen("input.txt", "r");
    fscanf(fr, "%d%d", &a, &b);
    fclose(fr);

    fr = fopen("output.txt", "w");
    fprintf(fr, "%d", a + b);
    fclose(fr);
}
