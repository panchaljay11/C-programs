#include<stdio.h>
 main()
 {
    
    int opt;
    float base,height,r;
    int no;

    printf("\nenter 1 for area of triangle");
    printf("\nenter 2 for area of circle");
    printf("\nenter 3 for positive or negative no");
    printf("\nenter opt =>");
    scanf("%d",&opt);

    if(opt==1)
    {
      printf("enter base=>");
      scanf("%f",&base);
      printf("\nenter height");
      scanf("%f",&height);
      printf("\n area of triangle=%.2f",height*base*0.5);  
    }
    else if(opt==2)
    {
      printf("\nenter area=>");
      scanf("%f",&r);
      printf("\n area of circle=%.2f",r*r*3.14);
    }
    else if(opt==3)
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
