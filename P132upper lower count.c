#include<stdio.h>
 main()
 {
    char alphabet[26];
    int upper_count=0,lower_count=0,y,i;
    char ch;

    printf("enter name=>");
    gets(alphabet);
    y = strlen(alphabet);
    for(i=0;i<y;i++)
    {
     ch = alphabet[i];
     if(isupper(ch))
     {
        upper_count++;
     }
     if(islower(ch))
     {
        lower_count++;
     }
    }
     printf("\nupper_count=> %d",upper_count);
     printf("\nlower_count=>%d",lower_count);
    
 }