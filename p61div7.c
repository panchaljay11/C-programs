#include<stdio.h>
 main()
{
    int i;
    int n,c=0,s=0;
    
    printf("enter limit=>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
  {
    if(i%7==0)
    {
    printf("\n%d",i);
    c++;
    s=s+i;
    }

  }
  printf("\ncount = %d sum = %d",c,s);
}
