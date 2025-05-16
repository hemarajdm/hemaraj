#include<stdio.h>
int main()
{
    int i,num,isprime=1;
    printf("enter the num starting from positive 2:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            printf("its not a prime number");
        }

        else {
            printf("its a prime number");

}
}
}
