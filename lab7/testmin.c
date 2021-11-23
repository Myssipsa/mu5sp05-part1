#include "min.h"

void main ()

{


int min;

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

minimum(tab,N,&min);

printf ("La valeur min est : %d\n",min);


}