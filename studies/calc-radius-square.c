#include <stdio.h>

char leggi_figura()
{
    char f;

    do
    {    
        printf("Inserire 'c' per cerchio oppure 'q' per quadrato: ");
        scanf("%c", &f);

        if(f!='c' && f!='q')
            printf("ERRORE: carattere errato\n");
    }
    while(f!='c' && f!='q');

    return f;
}

float leggi_valore(char figura)
{
    float val;

    do
    {    
        if(figura=='c')
            printf("inserire raggio: ");
        else
            printf("inserire lato: ");
        scanf("%f", &val);
        if(val<=0)
            printf("ERRORE: valore non positivo\n");
    }
    while(val<=0);
;
    return val;
}

float calcola_area(char figura, float raggio, float lato)
{
    const float PI=3.14;
    float area;

    if(figura=='c')
        area=raggio*raggio*PI;
    else
        area=lato*lato;

    return area;
}

int main()
{   
    char f;
    float v, a;

    f=leggi_figura();
    v=leggi_valore(f);

    if(f=='c')
        a=calcola_area(f, v, 0);
    else
        a=calcola_area(f, 0, v);

    printf("l'area vale %f\n", a);

    return 1;
}