#include <stdio.h>
#include <string.h>
#define DIM 20

int main()
{
    char s[DIM];
    int i, l, p, conta_maiuscole, conta_minuscole, conta_cifre, conta_punt;

    do
    {
        printf("\ninserire password: ");
        scanf("%s", s);

        conta_maiuscole=0;
        conta_minuscole=0;
        conta_cifre=0;
        conta_punt=0;
        

        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                conta_maiuscole++;
            if(s[i]>='a' && s[i]<='z')
                conta_minuscole++;
            if(s[i]>='0' && s[i]<='9')
                conta_cifre++;
            if(s[i]=='.' || s[i]==',' || s[i]==';' || s[i]=='?' || s[i]=='!' || s[i]==':')
                conta_punt++;
        }

        if(l>=8 && conta_maiuscole>=1 && conta_minuscole>=1 && conta_cifre>=1 && conta_punt>=1)
        {
            p=1;
            printf("\npassword accettata\n\n");
        }    
        else
        {
            p=0;
            printf("\npassword rifutata\n\n");
        }
    }
    while(p==0);
    
}





 

































    
    
    
    /** STRING COMPARE
    if(i != j)
        printf("parole diverse\n");
    else
    {
        p=1;
        for(i=0; s1[i] != '\0'; i++)
            if(s1[i] != s2[i])
                p=0;
        
        if(p)
            printf("parole identiche\n");
        else
            printf("parole diverse\n");
    }
        
    **/








 /**j=0; // conta i valori copiati in v2
    for(i=0; i<DIM; i++)
    {
        if(v1[i]!=0)
        {   
            // ricerca di v1[i] in v2
            p=0;
            for(k=0; k<j; k++)
                if(v2[k]==v1[i])
                    p=1;
            
            if(!p)
            {
                v2[j]=v1[i];
                j++;
            }
        }
    }

    printf("SECONDO VETTORE\n");
    printf("valori:\t");
    for(k=0; k<j; k++)
        printf("%d\t", v2[k]);
    printf("\n");

**/



    
    
    /** PRESENTE X VOLTE
     
    cont=0;
    p=0;

    for(i=0; i<DIM; i++)
        if(v[i]==x)
        {
            p=1;
            cont++;
        }
    
    if(p)
        printf("%d è presente per %d volte\n\n", x, cont);
    else
        printf("%d è assente\n\n", x);
    **/


    /** ORDINAMENTO - SELECTION SORT
     
    for(i=0; i<DIM-1; i++)
        for(j=i+1; j<DIM; j++)
            if(v[i]>v[j])
            {
                k=v[i];
                v[i]=v[j];
                v[j]=k;
            }

     printf("indici:\t");
    for(i=0; i<DIM; i++)
        printf("%d\t", i);
    printf("\n");

    printf("valori:\t");
    for(i=0; i<DIM; i++)
        printf("%d\t", v[i]);
    printf("\n");
**/


/** CERCARE UN VALORE
 
    printf("inserire valore da cercare: ");
    scanf("%d", &x);

    p=0; //assumo X assente
    i=0;
    j=DIM-1;

    while(i<=j && p==0)
    {
        m=(i+j)/2;
        if(x==v[m])
        {
            p=1;
            pos=i;
        }
        else
            if(x>v[m])
                i=m+1;
            else
                j=m-1;
    }

   
    if(p) // if (p==1)
        printf("%d è presente nella posizione %d\n", x, pos);
    else
        printf("%d è assente\n", x);
**/

