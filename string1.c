#include<stdio.h>
#include<string.h>

int main(){

    char email[50], password[50];

    printf("Enter your email:\n");
    scanf("%s", email);

    printf("Enter your password:\n");
    scanf("%s", password);

    if(strcmp(email,"example@gmail.com")==0 && strcmp(password,"password123")==0){
        printf("Login Successful\n");
    }
    else{
        printf("Invalid email or password\n");
    }

    return 0;
}
