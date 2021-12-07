#include "min.h"

void minimum (int tab[], int n, int*min)
{
    int i=0;
    int minObt=tab[0];
    for (i=0 ; i<n ; i++)

        {
            
            if (tab[i]<minObt )   
            { minObt=tab[i];}
            *min= minObt; 
            
            

        }


   
}