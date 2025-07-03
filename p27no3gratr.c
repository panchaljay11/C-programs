#include<stdio.h>
 main()
 {
   int no1,no2,no3;

   printf("\nenter no1 =>");
   scanf("%d",&no1);

   printf("\nenter no2 =>");
   scanf("%d",&no2);

   printf("\nenter no3 =>");
   scanf("%d",&no3);

   if(no1>no2 && no1>no3)
  {
   printf("\nno1 is greaterthan both");
  }
   else if(no2>no1 && no2>no3)
  { 
   printf("\nno2 is greaterthan both");
  }
   else if (no3>no1 && no3>no2) 
  {
   printf("\nno3 is greaterthan both");
  }
   else
  {
   printf("\nall are equal"); 
  }    
  
 } 
  
  
