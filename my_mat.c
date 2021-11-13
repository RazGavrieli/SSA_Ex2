#include <stdio.h>
#include <math.h>

#define SIZE 10
int a[SIZE][SIZE];

void printarray() // FOR TESTING 
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void optimizeMat() //O(n^3)
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (a[i][j]!=0&&a[i][k]!=0&&a[k][j]!=0) a[i][j] = fmin(a[i][j], a[i][k]+a[k][j]);
                if (i!=j&&a[i][j]==0&&a[i][k]!=0&&a[k][j]!=0) a[i][j] = a[i][k]+a[k][j];  
            }
        }     
    }
    
}


void initializeMat()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    optimizeMat();
}

void isConnected()
{
    int i; int j;
    scanf("%d %d", &i, &j);
    if (a[i][j]>0) printf("True\n");
    else printf("False\n");
}


void shortestPath()
{
    int i; int j;
    scanf("%d %d", &i, &j); 

    if (a[i][j]==0) printf("-1\n");
    else printf("%d\n", a[i][j]);
}

