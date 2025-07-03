#include<stdio.h>

int add(no1,no2)
{
    return no1+no2;
}
int cube(no1)
{ 
   return no1*no1*no1;
}
int max2(no1,no2)
{
    if(no1>no2)
    {
        return no1;
    }
    else
    {
        return no2;
    }   
}
main()
{
    int no1,no2,ans;

    ans=add(10,5);
     
    ans=cube(3);
    printf("\ncube=%d",ans);

    ans=max2(10);
    printf("\nmax no=%d",ans);
    
}