#include<stdio.h>
int main()
{
    int rev=0,num,rem,original;
    printf("enter the number int");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==original){
        printf("the number is palindrome");
    }
    else{
        printf("not palindrome");
    }
}
