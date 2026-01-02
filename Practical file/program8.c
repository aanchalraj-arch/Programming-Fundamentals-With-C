#include <stdio.h>
#include <string.h>
int main() {
    char correctUser[] = "admin";
    char correctPass[] = "1234";
    char username[50];
    char password[50];
    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0) {
        printf("Login Successful.\n");
    } else {
        printf("Invalid Login.\n");
    }
    return 0;
}