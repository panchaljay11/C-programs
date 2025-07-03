 #include<stdio.h>
  main()
{
    int i;
    int n;

    printf("enter limit=>");
    scanf("%d",&n);
  
    for(i=1;i>=n;i++)      
    {
    printf("%d + ",i*2);
    i++;
    }
    
  }
  
