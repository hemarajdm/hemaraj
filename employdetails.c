#include<stdio.h>
struct address{
    char city[20];
    int pin;
};
struct employee{
    char name [20];
    struct address a;
};
int main()
{
    int i;
    struct employee e;
    printf("Enter your name:");
    scanf("%s", &e.name);
    printf("Enter your city:");
    scanf("%s", &e.a.city);
    printf("Enter your city pin:");
    scanf("%f",&e.a.pin);

}
