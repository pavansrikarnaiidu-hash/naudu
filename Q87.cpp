//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>


typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;

void displayMessage(UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Hi, Guest! Please sign up for more features.\n");
            break;
        default:
            printf("Unknown role.\n");
    }
}

int main() {
    
    UserRole role;

    role = ADMIN;
    displayMessage(role);

    role = USER;
    displayMessage(role);

    role = GUEST;
    displayMessage(role);

    return 0;
}

