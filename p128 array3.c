#include<stdio.h>
 main()
 {
    char name[200];
    int y;
    printf("enter name=>");
    gets(name);

    y=strlen(name);

    printf("\nlength = %d",y);
 }