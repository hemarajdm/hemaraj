#include<stdio.h>
#include<string.h>
int main(){
    char name[15];
    printf("enter the name:");
    scanf("%s",&name);
    printf("your name is %s\n",name);
    int lenght=strlen(name);
    printf("%d",lenght);
    strcpy(name,"hemzxx");
    int comparision=strcmp("hemaraj.d","hemzx");
    printf("%d\n",comparision);
    strcat(name,"coder");
    printf("%s\n",name);
}
