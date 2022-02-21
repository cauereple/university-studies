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
    int *p1, *p2, *p3;

    p1=&x;
    p2=&y;
    p3=&z;

    printf("inserire tre valori: ");
    scanf("%d", p1);
    scanf("%d", p2);
    scanf("%d", p3);

    ordina(p1, p2, p3);

    printf("valori aggiornati: %d %d %d\n", *p1, *p2, *p3);

    printf("gli indirizzi sono: %p %p %p\n", p1, p2, p3);

    return 1;
}