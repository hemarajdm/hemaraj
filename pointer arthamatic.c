#include<stdio.h>
int main()
{
    int arr[100]={1,2,3,4},i;
    int *hem=arr;
    for(i=0;i<5;i++){
        printf("%d ",* (hem+i));
        printf("%p ",hem+i);
    }
}
