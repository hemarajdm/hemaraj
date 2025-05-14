#include <stdio.h>
int c;
int add(int a, int b)
{
    c=a+b;
    return c;
    
}
int main(){
    int result=add(5,8);
    printf("result is :%d\n",c);
}

