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
    if(i%2==0)
 {
    printf("\n%d is even",i);    
 }
    else 
 {
    printf("\n%d is odd",i);   
 }
 
 }while(i<=n);
  i++;
       
}
