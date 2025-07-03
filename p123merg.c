#include<stdio.h>
#define N 100
   int main()
{
   int a[N],b[N],c[N];  
   int i,n1,n2,k=0;
   printf("\nenter limit for a=>");
   scanf("%d",&n1);
   printf("\nenter limit for b=>");
   scanf("%d",&n2);
   for(i=0;i<n1;i++)
   {    
   printf("\nenter value of a[%d]=>",i+1);
   scanf(" %d",&a[i]);
   }    
   for(i=0;i<n2;i++)
   {   
   printf("\nenter value of b[%d]=>",i+1);
   scanf(" %d",&b[i]);        
   }
   for(i=0;i<n1;i++)
   {
   c[k]=a[i];
   k++;
   }
   for(i=0;i<n2;i++)
   {
   c[k]=b[i];
   k++;
   }
   printf("\nafter");
   for(i=0;i<k;i++)
   {
   printf("\n %d ",c[i]); 
   }
}
 