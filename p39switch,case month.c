#include<stdio.h>
 main()
{ 
  int monthnum;
  printf("\n enter monthnum:");
  scanf("%d",&monthnum);
  switch(monthnum)
 {
   case 1:
   printf("\nJanuary");
   break;
   case 2 :
   printf("\nFeb");
   break;
   case 3:
   printf("\nmarch");
   break;
   case 4:
   printf("\napril");
   break;              
   case 5:   
   printf("\nmay");
   break;
   case 6:
   printf("\njune");
   break;
   case 7:
   printf("\njuly");
   break;
   case 8:
   printf("\naugust");
   break;
   case 9:
   printf("\nseptember");
   break;
   case 10:
   printf("\noctober");
   break;
   case 11:
   printf("\nnovember");
   break;
            
   case 12:
   printf("\ndecember");
   break;
   default:
   printf("\nWrong month num");
 }
}