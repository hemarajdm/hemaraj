#include<stdio.h>
int main()
{
    int i,arr[100]={1,2,3,4},n=4,*start,*end,temp;
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
        
    }
    for(i=0;i<n;i++)
    
        printf("%d",arr[i]);
    
}
