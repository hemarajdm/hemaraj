#include<stdio.h>
int fact=1,i=1;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        printf("Enter positive number.");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d is:%d",n,fact);
    }
}
int main()
{
    factorial(5);
    return 0;
}
