#include<stdio.h>
int main(){
    int arr[]={10,20,30,40};
    int *ptr=arr;
    printf("pointer is %d\n",*ptr);
    *ptr++;
    printf("pointer is %d\n",*ptr);
    *ptr--;
    printf("pointer is %d\n",*ptr);
}
