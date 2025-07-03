#include<stdio.h>
 main()
 {
   int daynum;

   printf("\n enter daynum=>");
   scanf("%d",&daynum);

   if(daynum==1)
   {
    printf("\n monday");
   }
   else if(daynum==2)
   {
    printf("\n tuesday");
   }
   else if(daynum==3)
   {
    printf("\n wednesday");
   }
   else if(daynum==4)
   {
    printf("\n thursday");
   }
   else if(daynum==5)
   {
    printf("\n friday");
   }
   else if(daynum==6)
   {
    printf("\n satrday");
   }
   else if (daynum==7)
   {
    printf("\n sunday");
   }
   else
   {
    printf("\n num day");
   }
}