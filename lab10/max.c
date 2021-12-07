#include "max.h"

void maximum (int tab[], int n, int*max)
{
    int i=0;
    int maxObt=tab[0];
    for (i=0 ; i<n ; i++)

        {
            if (tab[i]>maxObt )   
            { maxObt=tab[i];}
            *max= maxObt; 
            
            

        }


   
}
