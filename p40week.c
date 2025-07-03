#include<stdio.h>
 main()
 {
   int daynum;

   printf("\n enter daynum=>");
   scanf("%d",&daynum);
   switch (daynum)
   {
    case 1:
        printf("\nmonday");
        break;
    case 2:
        printf("\n tuesday");
         break;
    case 3:
        printf("\n wednesday");
         break;
    case 4:  
        printf("\n thursday");
        break;
    case 5:
        printf("\n friday");
        break;
    case 6:
        printf("\n satrday");
        break;
    case 7:
        printf("\n sunday");
        break;
    default:      
        printf("\n no day");  
}
}