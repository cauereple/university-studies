#include <stdio.h>

void carica_vettore(int vet[], int dim )
{
    int i;

    for(i=0; i<dim; i++)
    {
        printf("inserire elemento in posizione %d: ", i);
        scanf("%d", &vet[i]);
    }
}

void visualizza_vettore(int vet[], int dim)
{

    int i;

    printf("\nindici:\t");
    for(i=0; i<dim; i++)
        printf("%d\t", i);
    printf("\n");

    printf("valori:\t");
    for(i=0; i<dim; i++)
        printf("%d\t", vet[i]);
    printf("\n\n");
}

void somma_vettore(int vet1[], int vet2[], int vet3[], int dim)
{
    int i, j, k, cont;

    for(i=0; i<dim; i++)
        vet3[i]=vet1[i]+vet2[i];  
}

int main(){

    int dim, v1[dim], v2[dim], v3[dim];

    printf("Inserire dimensione dei vettori: ");
    scanf("%d", &dim);

    printf("\n\nPRIMO VETTORE\n");
    carica_vettore(v1, dim);
    printf("\nSECONDO VETTORE\n");
    carica_vettore(v2, dim);

    printf("\nPRIMO VETTORE");
    visualizza_vettore(v1, dim);
    printf("\nSECONDO VETTORE");
    visualizza_vettore(v2, dim);

    somma_vettore(v1, v2, v3, dim);

    printf("\nTERZO VETTORE");
    visualizza_vettore(v3, dim);

    return 1;
}