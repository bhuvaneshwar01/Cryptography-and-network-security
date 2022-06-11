#include<stdio.h>

void main(){
    char name[64];
    printf("%p\n",name);

    printf("Enter your name : ");
    gets(name);

    printf("Hello, %s \n",name);
}