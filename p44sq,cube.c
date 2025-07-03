#include<stdio.h>
 main()
{
    int no,opt;
    char ch;
    printf("\nEnter s for squre");
    printf("\nEnter c for cube");
    printf("\nenter opt =>");
    scanf("%c",&ch);
    switch (ch)
   {
    case 's':
    case 'S':
    printf("\nEnter number =>");
    scanf("%d",&no); 
    printf("\n squre=%d",no*no);  
    break;
    case 'c':
    case 'C':
    printf("\nEnter number =>");
    scanf("%d",&no); 
    printf("\n cube=%d",no*no*no);   
    break;
    default:
    printf("\n error");
    
   }

}    
