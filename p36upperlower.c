#include<stdio.h>
 main()
 {
    
    char ch;

    printf("\nenter char =>");
    scanf("%c",&ch);
   
   if(isupper(ch))
   {
    printf("\nYes it is upper case");
   }
   else if(islower(ch))
   {
    printf("\nYes it is in lower case");
   }
   else
    {
      printf("\nOther");
    }          
 }
