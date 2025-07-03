#include<stdio.h>
 int main()
 {
    
    char opt;
    float base,height,r;
    int no;

    printf("\nenter a for area of triangle");
    printf("\nenter b for area of circle");
    printf("\nenter c for positive or negative no");
    printf("\nenter opt =>");
    scanf("%c",&opt);

    if(opt=='a' || opt=='A')
    {
      printf("nenter base=>");
      scanf("%f",&base);
      printf("\nenter height");
      scanf("%f",&height);
      printf("\n area of triangle=%.2f",height*base*0.5);  
    }  
    else if(opt=='b' || opt=='b')
    {
      printf("\nenter area=>");
      scanf("%f",&r);
      printf("\n area of circle=%.2f",r*r*3.14);
    }
    else if(opt=='c')
    {
      printf("\nenter no=>");
      scanf("%d",&no);
      if(no>0)
      {
      printf("\nno is positive");
      }
      else
      {
      printf("\nno is negative");
      }
    }   
   else
    {
      printf("\nWrong opt");
    }          
 }
