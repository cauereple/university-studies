#include <stdio.h>
#include <string.h>

#define DIM 100

int main(){

    char s[DIM], c;
    int i, l, conta_vocali, conta_consonanti, cont;

    printf("\ninserire frase: ");
    scanf("%s", s);

    l=strlen(s);
    conta_vocali=0;
    conta_consonanti=0;

    for(i=0; i<l; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            conta_vocali++;
        else
            conta_consonanti++;
    }

    printf("\n\nVocali: %d\n", conta_vocali);

    printf("\nConsonanti: %d\n\n", conta_consonanti);

    for(c='a'; c<='z'; c++)
    {
        cont=0;
        for(i=0; i<l; i++)
            if(c == s[i])
                cont++;
        
        if(cont!=0)
            printf("%c presente %d volte\n\n", c, cont);
    }

}