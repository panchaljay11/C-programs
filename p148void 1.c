#include<stdio.h>

void add()
{
    int no1,no2;

    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    printf("\nadd=%d",no1+no2);
}
void oddeven()
{
    int no;
    printf("\nenter no=>");
    scanf("%d",&no);

    if(no%2==0)
    {    
    printf("\nno is even");
    }
    else
    {
    printf("\nno is odd");
    }   
}
void max2()
{
    int no1,no2;
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    if(no1>no2)
    {
        printf("\nno1 is max");
    }
    else
    {
        printf("\nno2  is max");
    }   
}
void areaoftriangle()
{
    float b,h;
    
    printf("\nenter b =>");
    scanf("%f",&b);
    printf("enter h =>");
    scanf("%f",&h);
    printf("area of triangle=%.2f",h*b*0.5);
}
void areaofcircle()
{
    float r;
    printf("\nenter area=>");
    scanf("%f",&r);
    printf("\n area of circle=%.2f",r*r*3.14);
}
void max3() 
{
     int no1,no2,no3;
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    printf("\nenter no3=>");
    scanf("%d",&no3);
    if(no1>no2 && no1>no3)
    {
        printf("\nno1 is max");
    }
    else if(no2>no1 && no2>no3)
    {
        printf("\nno2  is max");
    }
    else if(no3>no1 && no3>no2)
    {
        printf("\nno3 is max");
    }  
    else
    {
        printf("\nall are equal");
    }    
}
void table()
{
    int i,n;
    printf("\nenter limit=>");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
    printf("\n%d X %d = %d",n,i,i*n);
    i++;
    }
}    
void factorial()
{
    int i;
    int n,s1=1;

    printf("\nenter limit=>");
    scanf("%d",&n);
    i=1;
    while(i<=n)
   {
     printf("%d X ",i);      
     s1=s1*i;
     i++; 
   } 
    printf("\nfactorial=%d",s1);
}
void cube()
{ 
    int no;
    printf("\nenter no=>");
    scanf("%d",&no);
    printf("\ncube=%d",no*no*no);
}
void squre()
{
    int no;
    printf("\nenter no=>");
    scanf("%d",&no);
    printf("\n squre=%d",no*no);
}
main()
{
  add();
  oddeven();
  max2();
  areaoftriangle();
  areaofcircle();
  max3();
  table();
  factorial();
  cube();
  squre();
}
