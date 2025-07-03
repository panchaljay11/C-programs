#include<stdio.h>
#define N 100
  int main()
 {
    int a[N];
    int n,i;
    printf("\nenter limit=>");
    scanf("%d",&n);
    printf("\nenter values=>");
    for(i=0;i<n;i++)
    {
        printf("\nenter value of a[%d]=>",i+1);
        scanf(" %d",&a[i]);
    }
    
    

 }