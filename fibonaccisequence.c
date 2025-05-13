#include<stdio.h>
int main()
{
    int i,n,t1=3,t2=5,t3;
    printf("enter the length of fibonacci sequence to be generated:");
    scanf("%d",&n);
    printf("fibonacci sequence is:%d,%d",t1,t2);
    for(i=3;i<=n;i++)
    {
        t3=t1+t2;
        printf(",%d",t3);
        t1=t2;
        t2=t3;
    }
}
