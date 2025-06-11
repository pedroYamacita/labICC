#include <stdio.h>
#include <stdlib.h>
int main(){
    int posi_cap_inicial, posi_cap, posi_alan, dist, i;
    dist=0;
    scanf(" %d %d", &posi_cap_inicial, &posi_alan);
    posi_cap=posi_cap_inicial;
    if (posi_cap==posi_alan)
    {
        printf("");
    }
    else if (posi_cap<posi_alan)
    {
        for (i=1; posi_cap<posi_alan; i *= -2)
        {
          posi_cap = posi_cap_inicial + i;
          dist += abs(2*i);
        }
    }
    else if (posi_cap>posi_alan)
        {
            for (i=1; posi_cap>posi_alan; i *= -2)
            {
              posi_cap = posi_cap_inicial + i;
              dist += abs(2*i);
            }
           
        
    }
    dist = dist - abs(i/2) - abs(posi_cap-posi_alan);
    printf("%d", dist);

    return 0;
}