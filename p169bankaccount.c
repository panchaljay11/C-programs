#include<stdio.h>

struct bank
{
    int acno;
    char custname[20];
    float balance;
};

main()
{
    float x;
    struct bank b1;

    printf("\nenter Account No =>");
    scanf("%d",&b1.acno);

    fflush(stdin);
    printf("\nEnter Customer Name =>");
    gets(b1.custname);

    printf("\nEnter Balance =>");
    scanf("%f",&b1.balance);

     printf("\nBefore WithDrawn");
     printf("\nAccount No\tCustomer Name\tBalance");
     printf("\n===================================");
     printf("\n%d\t\t%s\t\t%.2f",b1.acno,b1.custname,b1.balance);
     printf("\n===================================");

    printf("\nEnter amount WithDrawn =>");
    scanf("%f",&x);
    b1.balance=b1.balance-x;

     printf("\n\nAfter WithDrawn");
     printf("\nAccount No\tCustomer Name\tBalance");
     printf("\n===================================");
     printf("\n%d\t\t%s\t\t%.2f",b1.acno,b1.custname,b1.balance);
     printf("\n===================================");

}