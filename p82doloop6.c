 #include<stdio.h>
  main()
{
    int i;
    int n,s1=1;

    printf("enter limit=>");
    scanf("%d",&n);
    i=1;
   do 
 {
     printf("%d X ",i);      
     s1=s1*i;
     i++; 
 } while(i<=n);
   
     printf("nfactorial=%d",s1);
 } 