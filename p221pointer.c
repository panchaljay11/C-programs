#include<stdio.h>
main()
{
	int i,*ptr;
	int n,a[100];
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		printf("\nenter value =>");
		scanf("%d",&a[i]);
	}
	ptr=a;
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",*ptr);
		ptr++;
	}
	
}
