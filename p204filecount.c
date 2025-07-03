#include<stdio.h>
int main()
{
     FILE *f1;
     char ch;
     int cnt=0;

     f1=fopen("d:\\abc.txt","r");

     while(ch!=EOF)
     {
          ch=getc(f1);
          if(ch=='a')
          {
               cnt++;
          }
     }
     fclose(f1);
     printf("count=%d",cnt);
}