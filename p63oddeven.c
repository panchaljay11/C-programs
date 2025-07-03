#include<stdio.h> 
 main()
{
    int i;
    int n,c1=0,s1=0,c2=0,s2=0;
       
    printf("enter limit=>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
 {
    if(i%2==0)
 {
    printf("\n%d is even",i); 
    c1++;
    s1=s1+i;
 }
    else 
 {
    printf("\n%d is odd",i);
    c2++;
    s2=s1+i;
 }
 
 }
    printf("\ncount = %d sum = %d",c1,s1);
    printf("\ncount = %d sum = %d",c2,s2);
    
}
