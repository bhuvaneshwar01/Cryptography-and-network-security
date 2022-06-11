#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_auth(char *password_buffer)
{
    int auth_flag = 0;
    
    
    char *p = "bhuvan";

    if (strcmp(password_buffer, p) == 0)
    {
        auth_flag = 1;
    }
    
    return auth_flag;
}

int main()
{
    char password_buffer[16];
    printf("[-] Enter the password : ");
    scanf("%s",password_buffer);
    
    if (check_auth(password_buffer))
    {
        printf("\n-----------------------------------\n");
        printf("\tACCESS GRANTED\t");
        printf("\n-----------------------------------\n");
    }
    else
    {
        printf("\n-----------------------------------\n");
        printf("\tACCESS DENIED\t");
        printf("\n-----------------------------------\n");
    }
    return 0;
}