#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("the number is positive");
    }
    else if(n<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is equal to zero");
    }
}
