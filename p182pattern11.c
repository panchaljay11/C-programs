#include<stdio.h>
 int main()
 {
     int i,j,k=1,n;

     printf("\nenter the valuue =>");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
     k=n;
     for(j=1;j<=i;j++)
     {       
          printf("%d",k);
          k--;
     
     }
     printf("\n");
     }
 }