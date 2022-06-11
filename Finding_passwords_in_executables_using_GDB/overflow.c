#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void granted()
{
    printf("\nAccess granted\n");
    return;
}

int checkpwd()
{
    char pwd[25];
    printf("Enter your password : ");
    gets(pwd);
    if (strcmp(pwd, "bhuvan"))
    {
        printf("\nFailed to login\n");
    }
    else
    {
        granted();
    }
}

int main()
{
    checkpwd();
    return 0;
}