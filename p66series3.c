 #include<stdio.h>
  main()
{
    int i;
    int n,s1=0;

    printf("enter limit=>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
 {
    if(i%2==0)      
    {
    printf("%d + ",i*i);
    s1=s1+i*i;
    }
    else
    {
    printf("%d + ",i*i*i);
    s1=s1+i*i*i;
    }
 }
    printf("nsum=%d",s1);  
 
}  