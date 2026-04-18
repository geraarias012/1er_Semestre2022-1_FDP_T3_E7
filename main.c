#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int arreglo[100], arreglo2[10][2], acum=0;

    for(int i=0;i<100;i++)
    {
        arreglo[i]=1+rand()%10;
        printf("%d\t", arreglo[i]);
    }

    for(int b=0;b<10;b++)
    {
        arreglo2[b][0]=1+b;
    }

    for (int j=0;j<10;j++)
    {
        for(int i=0;i<100;i++)
        {
            if(arreglo[i]==j+1)
            {
                acum=acum+1;
            }
        }
        arreglo2[j][1]=acum;
        acum=0;
    }
    printf("\nHistograma:\n");
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<2;i++)
        {
            printf("%d\t", arreglo2[j][i]);
        }
        printf("\n");
    }
     return 0;
}
