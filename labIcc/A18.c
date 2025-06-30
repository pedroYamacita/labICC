#include <stdio.h>
#include <math.h>

double distancia(double cordX[], double cordY[], int pessoas){
  double dist=0, deltax=0, deltay=0;
  
  for(int j=0; j<pessoas-1; j++)
    {
      deltax=cordX[j]-cordX[j+1];
      deltay=cordY[j]-cordY[j+1];
      dist+=sqrt(pow(deltax, 2)+pow(deltay, 2));
    }
    return (dist);
}




int main()
{
    int pessoas;
    double dist=0;
    
    scanf(" %d", &pessoas);
    
    double cordX[pessoas], cordY[pessoas];
    
    for (int i = 0; i < pessoas; i++)
    {
        scanf(" %lf %lf", &cordX[i], &cordY[i]);
    }
    
    dist=distancia(cordX, cordY, pessoas);
    printf("%.4lf", dist);
    return 0;
}