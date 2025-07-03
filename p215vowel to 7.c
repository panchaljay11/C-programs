#include<stdio.h>
main()
{
	FILE *f1,*f2;
	char ch;
	
	f1=fopen("d:\\abc.txt","r");
     f2=fopen("d:\\pqr.txt","w");
   
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch=='a' || ch=='A' || ch=='e' ||ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' ||ch=='u' ||ch=='U')
		{
			putc('7',f2);     
		}	
          else
          {
               putc(ch,f2);
          }
	}
	fclose(f1);
     fclose(f2);
}





