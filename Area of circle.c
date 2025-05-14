#include<stdio.h>
int r;
int areaofcir()
{
    float pi=3.14,area;
    area=3.14*r*r;
    return area;
}
int main()
{
    printf("enter the redius of circle:");
    scanf("%d",&r);
    float result=areaofcir(r);
    printf("area of circle is:%.2f",result);
}
