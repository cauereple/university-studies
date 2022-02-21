#include <stdio.h>

void scambia (int* a, int* b)
{
    int k;

    k=*a;
    *a=*b;
    *b=k;
}

void ordina(int* a, int* b, int* c)
{
    if(*a > *b)
        scambia(a, b);
    if(*a > *c)
        scambia(a, c);
    if(*b > *c)
        scambia(b, c);
}

int main()
{
    int x, y, z;

    printf("inserire tre valori: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    ordina(&x, &y, &z);

    printf("valori aggiornati: %d %d %d\n", x, y, z);

    return 1;
}