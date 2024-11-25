#include<stdio.h>

int add(int a,int b,int c)
{
    int s=0;
    s=a+b+c;
    return s;
}

float average(int a, int b, int c)
{
    float f;
    f=((a+b+c)/3);
    return f;

}
int main()
{
    int a,b,c,sum;
    float avg;

    printf("Enter the first number: \n");
    scanf("%d",&a);
    
    printf("Enter the second number: \n");
    scanf("%d",&b);
    
    printf("Enter the third number: \n");
    scanf("%d",&c);

    sum=add(a,b,c);
    printf("The sum of %d and %d and %d is: %d\n",a,b,c,sum);

    avg=average(a,b,c);
    printf("The average of %d and %d and %d is: %0.2f\n",a,b,c,avg);


}