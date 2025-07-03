#include<stdio.h>
 main()
 {  
    char ch;

    printf("\nenter alphabet =>");
    scanf("%c",&ch);
   
    if(ch=='i' || ch=='I')
   {
    printf("\n %c for INDIA",ch);
   }  
    else if(ch=='p' || ch=='P')
    {
     printf("\n %c for pakistan",ch);  
    }
    else if(ch=='c' || 'C')
    {
    printf("\n %c for CANADA",ch);
    } 
    else if(ch=='u' || 'U')
    {
        printf("\n %c for USA",ch);
    }  
 }
