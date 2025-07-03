#include<stdio.h> 
 main()
{
    int i;
    int n;
       
    printf("enter limit=>");
    scanf("%d",&n);
    i=1;
   do
 {
    printf("\n%d ",i*2);
    i++;    
 } while(i<=n);
       
}
