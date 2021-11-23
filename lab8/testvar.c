#include "var.h"

void main ()

{

float var;


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


variance(tab,N,&var);

printf ("La variance vaut : %f\n",var);


}