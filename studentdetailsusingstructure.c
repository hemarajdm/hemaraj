#include<stdio.h> 
struct students{
 int roll;
 float marks; 
 char name[50];};

 int main() {
 
 struct students s;
 printf("enter the name,roll and marks"); 
 scanf("%5%d%f",&s.name,&s.roll,&s.marks);
 printf("name:%s\nroll:%d\nmarks:%2f\n",s.name,s.roll,s.marks);
 }
