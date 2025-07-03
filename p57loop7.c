#include<stdio.h> 
 main()
{
    int i;
    int n;

    printf("enter limit=>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
  {
    if(i%7==0)
    {
    printf("\n%d",i);
    }
  }
}
