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
