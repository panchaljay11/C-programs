#include<stdio.h>
#define N 2
 int main()
{
    int a[N][N];
    int b[N][N];
    int i,j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\nEnter number 1=>");
            scanf("%d",&a[i][j]);
        }     
    }
    for(i=0;i<N;i++)
    {
       for(j=0;j<N;j++)
       {
            printf("\nEnter number 2=>");
            scanf("%d",&b[i][j]);
       }  
    }
    printf("\nvalues of A\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nvalues of B\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nNew matrix =>\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}