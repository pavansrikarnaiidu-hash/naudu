//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch
#include <stdio.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    int a, b;
    enum Menu choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation (0=ADD, 1=SUBTRACT, 2=MULTIPLY): ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

