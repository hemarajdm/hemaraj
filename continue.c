#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the element:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==6)
            continue;
            printf("%d",i);
            
    }
    return 0;
}
