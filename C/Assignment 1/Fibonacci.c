#include<stdio.h>

void main()
{
    int a=0,b=1,next,i,n;
    printf("Enter the number of terms of fibonacci series:\n");
    scanf("%d",&n);

    printf("The fibonacci series is:\n%d %d ",a,b);
    next=a+b;
    for(i=3;i<=n;i++)
    {
        
        next=a+b;
        a=b;
        b=next;
        printf("%d ",next);
    }

   

}