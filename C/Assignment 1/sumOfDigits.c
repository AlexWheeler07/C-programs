#include<stdio.h>
 
int digit(int n)
{
    int s=0,i,rem;
    while(n!=0)
    {rem = n%10;
    s=s+rem;
    n=n/10;
    }

    return s;

}

int main()
{
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    if(n<0)
    {
    printf("Wrong input, please enter a positive integer");
    return 0;
}
    printf("The sum of digits of the entered number is :%d",digit(n));
    return 0;

}