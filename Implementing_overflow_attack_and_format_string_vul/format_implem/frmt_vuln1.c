#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bad_function(){
    printf("\nCant be executed\n");
}

int main(int argc,char *argv[]){
    int val = 10;

    printf(argv[1],&val);

    if(val == 15)
        bad_function();

    return 1;
}