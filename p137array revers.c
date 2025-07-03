#include<stdio.h>
 main()
 {
    char name[200];
    int y,i;
    char ch;

    printf("enter name=>");
    gets(name);
    y = strlen(name);
    for(i=y-1;i>=0;i--)
    {
     ch =name[i];
      printf("%c",ch);
    }
 }