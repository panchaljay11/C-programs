#include<stdio.h>
 main()
 {
    int no;
    shahpur:

    printf("\n enter positive no=>");
    scanf("%d",&no);

    if(no>0)
    {
    printf("\nsqure=%d",no*no);
    }
    else
    {
    printf("\nyaar why enter negative");
    goto shahpur;
    }

 }