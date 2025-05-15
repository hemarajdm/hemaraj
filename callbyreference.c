#include<stdio.h>
int main(){
    int a=7;
    int *c=&a;
    *c= *c+20;
    printf("a=%d\n",*c);
    printf("c=%d\n",*c);
}
