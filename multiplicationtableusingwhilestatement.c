#include <stdio.h>

int main() 
{
    int num,i=1;
    printf("enter the value of num");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
}
    
