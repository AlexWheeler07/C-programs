#include<stdio.h>
/*
int main()
{
 int n,i,s=0;
 printf("Enter the number of terms:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    s=s+i;
 }
 printf("The sum of first %d natural number is: %d\n",n,s);
}
*/


//Optimised Solution with O(n) time complexity:
int main()
{
   int n,sum=0;
   printf("Enter the number of terms:\n");
   scanf("%d",&n);
   sum=sum+(n*(n+1)/2);
   printf("The sum of first %d natural numbers is: %d",n,sum);
   return 0;

}
