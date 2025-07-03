#include<stdio.h>
# define N 2
 main()
 {
    int a[N][N];
    int i,j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\n enter number=>");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d ",a[i][j]*-1);
        }
    
    printf("\n");
    }
      for(i=0;i<N;i++)
      {
        for(j=0;j<N;j++)
      {
        if(a[i][j]>0)
        printf("\n");            
      }       
     }
 }
 