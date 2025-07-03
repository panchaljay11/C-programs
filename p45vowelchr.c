#include<stdio.h>
 main()
 {  
    char ch;

    printf("\nenter alphabet =>");
    scanf("%c",&ch);
    switch (ch)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
     printf("\nvowel");
     break;
   
    default:
      printf("\n");
    }       
           
 }
