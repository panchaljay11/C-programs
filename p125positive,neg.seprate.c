#include<stdio.h>
#define N 100
   int main()
{
   int a[N],b[N],c[N];  
   int i,n,k=0,s=0;
   printf("\nenter limit for a=>");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   printf("\nenter value of a[%d]=>",i+1);
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   if(a[i]>0)
   {
    c[k]=a[i];
    k++;
   }
   else
   {
    b[s]=a[i];
    s++;
   }
   printf("\npostive number are=>");
   for(i=0;i<k;i++)
   {
    printf(" %d ",c[i]);
   }
    printf("\nnegative number are=>");
    for(i=0;i<s;i++)
   {
    printf(" %d ",b[i]);
   }
}
  