#include "max.h"
#include "min.h"
#include "var.h"

void main ()

{

int min;
int max;
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
minimum(tab,N,&min);
maximum(tab,N,&max);
variance(tab,N,&var);


printf ("La valeur min est : %d.\n La valeur max est : %d.\n La variance vaut : %f (arrondi supérieur) et vaut : %f (arrondi inférieur)\n",min,max,ceil(var),floor(var));


}