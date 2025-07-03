 #include<stdio.h>
  main()
{
    int i;
    int n,s1=0;

    printf("enter limit=>");
    scanf("%d",&n);
    for(i=1;i<=1;i++)
 {
    if(i%2==0)      
    {
    printf("+ %d ",i);
    s1=s1-i;
    } 
    else
    {  
    printf(" %d ",i);
    s1=s1+i;
    }
    
 }
    printf("\nsum=%d",s1);

}  