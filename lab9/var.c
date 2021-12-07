#include "var.h"

void variance (int tab[], int n, float *var)
{
    int i=0;
    float varObt=0;
    int M=0;
    int val=0;
    float c=0;
    int somme=0;

    /*Calcul de la moyenne*/ 
    for (i=0 ; i<n ; i++)
    {
        val=val+tab[i];
        
    }

    M=val/n;

    for (i=0 ; i<n ; i++)
    {
        somme=somme+(tab[i]-M)*(tab[i]-M);

    }

    
    varObt=somme/n;

    *var=varObt;


}
