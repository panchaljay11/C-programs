#include<stdio.h>
 int main()
 {
     int i,j,n;

     printf("\nenter the valuue =>");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
     for(j=1;j<=i;j++)

     {       
          printf("*");
     }
     printf("\n");
     }
 }