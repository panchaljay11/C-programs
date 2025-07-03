#include<stdio.h>
 struct hotel
{
    int hcharges;
    char hname[20];
    char haddress[50];
};

 int main()
{
    struct hotel h[100];
    int  i,no,c,y=0;
    
    printf("\nenter limit =>");
    scanf("%d",&no);
                               
    for(i=0;i<no;i++)
   {
    fflush(stdin);
    printf("\nenter Hotel Name =>");
    gets(h[i].hname);

    fflush(stdin);
    printf("\nenter Hotel Address =>");
    gets(h[i].haddress);

    printf("\nenter room charges =>");
    scanf("%d",&h[i].hcharges);
   
   }  
    printf("\nenter budget to see hotels =>");
    scanf("%d",&y);
    c=0;

    printf("\n====================================================================");

    for(i=0;i<no;i++)
   {
   
       
        if(h[i].hcharges<y)
        {
        printf("\nHotel Name = %s\nHotel Address = %s\nHotel Room charges = %d",h[i].hname,h[i].haddress,h[i].hcharges);
        c=1;
        }
   }

    if(c==0)
    {
    printf("\nsorry not found");
    }

    printf("\n====================================================================");
}

