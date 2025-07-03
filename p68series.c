 #include<stdio.h>
  main()
{
    int i;
    int n,s1=1;

    printf("enter limit=>");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
 {
     printf("%d X ",i);      
    s1=s1*i; 
} 
    printf("\nfactorial=%d",s1);
} 