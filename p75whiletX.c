 #include<stdio.h>
  main()
{
    int i;
    int n,s1=1;

    printf("enter limit=>");
    scanf("%d",&n);
    i=1;
    while(i<=n)
 {
     printf("%d X ",i);      
     s1=s1*i;
     i++; 
} 
    printf("nfactorial=%d",s1);
} 