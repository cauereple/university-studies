#include <stdio.h>
#define DIM 4

void carica_vettore(int* vet, int dim)
{
    int i;

    for(i=0; i<DIM; i++)
    {
        printf("inserire valore in posizione %d: ", i);
        scanf("%d", vet+i); //vet+i = &vet[i]
    }
}

void visualizza_vettore(int* vet, int dim)
{
    int i;

    printf("\n\nindici:\t");
    for(i=0; i<DIM; i++)
        printf("%d\t", i);
    printf("\n\n");

    printf("valori:\t");
    for(i=0; i<DIM; i++)
        printf("%d\t", *(vet+i));
    printf("\n\n");
        
}

int calcola_massimo(int* vet, int dim)
{
    int i, max;

    for(i=0; i<DIM; i++)
    {
        if(i==0)
            max=*(vet+i);
        else
            if(*(vet+i) > max)
                max=*(vet+i); //*(vet+i) = v[i]
    }

    return max;
}



int main()
{   
    int v[DIM], m;

    carica_vettore(&v[0], DIM);
    visualizza_vettore(&v[0], DIM); // &v[0] = v
    m=calcola_massimo(&v[0], DIM);

    printf("Il massimo è %d\n", m);

    return 1;
}