
#include "max.h"



void main ()

{

int max;

int N;
printf("Entrez la taille de votre tableau : \t");
scanf("%d",&N);

int tab[N];
int i;
for (i=0 ; i<N ; i++)
{
    printf("Entrez la valeur t[%d]= :\t",i);
    scanf("%d",&tab[i]);
    printf("Valeur en t[%d]=%d\n",i,tab[i]);

}

maximum(tab,N,&max);

printf ("La valeur max est : %d\n",max);


}



