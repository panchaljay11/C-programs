#include<stdio.h>
 main()
{
    int no,opt;
    printf("\nEnter no1 for squre=>");
    printf("\nEnter no2 for cubee=>");
    printf("\nenter opt");
    scanf("%d",&opt);
    switch (opt)
   {
    case 1:
    printf("\nEnter number =>");
    scanf("%d",&no); 
    printf("\n squre=%d",no*no);  
    break;
    case 2:
    printf("\nEnter number =>");
    scanf("%d",&no); 
    printf("\n cube=%d",no*no*no);   
    break;
    default:
    printf("\n error");
    
   }

}    

        

    

    
        

