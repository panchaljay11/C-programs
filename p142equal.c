#include<stdio.h>
 main()
 {
    char name1[200];
    char name2[200];
    char ch1,ch2;
    int i,x,y;

    printf("enter name1=>");
    gets(name1);
    printf("\nenter name2=>");
    gets(name2);
    x=strlen(name1);
    y=strlen(name2);
  
   if(x==y)
   {
        for(i=0;i<x;i++)
        {
            ch1=name1[i];
            ch2=name2[i];
            printf("\n%c  %c",ch1,ch2);
        } 
   }
   else 
   {
    printf("\nnot equal");
   }   
 }