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
         if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
         {
          printf("\n%c",ch);
          cnt++;
         }
     }
     fclose(f1);
     printf("\nvowels=%d",cnt);
}
