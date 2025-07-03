#include<stdio.h>
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
int main()
{
	int a,b;
	
	printf("\nEnter value of a =>");
	scanf("%d",&a);
		
	printf("\nEnter value of b =>");
	scanf("%d",&b);
	
	swap(&a,&b);

	printf("\nAfter swaping \na = %d \nb = %d",a,b);
}
