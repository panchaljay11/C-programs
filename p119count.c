#include <stdio.h>
#define N 100
int main()
{
int a[N];
int n,i,c=0;
int y;

 printf("\nenter limit=>");
 scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    printf("\nenter vlaue of a[%d]=>",i+1);
    scanf("%d",&a[i]);
    }
     printf("\nenter vlaue for search= ");
     scanf("%d",&y);
     for(i=0;i<n;i++)
     {
        if(a[i]==y)
        {
        c++;
        }
     }        
     if(c==0)
     {
      printf("\n sorry ");
     } 
     else
     {
     printf("\ncount = %d",c);
     }       
}
       